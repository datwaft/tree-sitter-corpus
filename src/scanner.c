#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"

typedef enum { HEADER_DELIMITER, DELIMITER } TokenType;

typedef struct {
  Array(int32_t) * delimiter;
} Scanner;

static uint8_t consume_chars(TSLexer *lexer, int32_t c) {
  uint8_t count = 0;
  while (lexer->lookahead == c) {
    lexer->advance(lexer, false);
    count += 1;
  }
  return count;
}

static bool consume_shared_suffix(TSLexer *lexer, Scanner *s) {
  if (s->delimiter->size == 0) {
    // If the delimiter is not set we set it
    while (!lexer->eof(lexer) && lexer->lookahead != '\n') {
      array_push(s->delimiter, lexer->lookahead);
      lexer->advance(lexer, false);
    }
    return true;
  } else {
    // If the delimiter is set then we try to match it
    uint8_t count = 0;
    while (!lexer->eof(lexer) && lexer->lookahead != '\n') {
      if (s->delimiter->size <= count) {
        return false;
      }
      if (lexer->lookahead != *array_get(s->delimiter, count)) {
        return false;
      }
      lexer->advance(lexer, false);
      count += 1;
    }
    if (count < s->delimiter->size) {
      return false;
    }
    return true;
  }
}

static bool parse_header_delimiter(TSLexer *lexer, Scanner *s) {
  lexer->mark_end(lexer);

  uint8_t count = consume_chars(lexer, '=');
  if (count >= 3) {
    if (!consume_shared_suffix(lexer, s)) {
      return false;
    }
    lexer->mark_end(lexer);
    lexer->result_symbol = HEADER_DELIMITER;
    return true;
  } else {
    return false;
  }
}

static bool parse_delimiter(TSLexer *lexer, Scanner *s) {
  lexer->mark_end(lexer);

  uint8_t count = consume_chars(lexer, '-');
  if (count >= 3) {
    if (!consume_shared_suffix(lexer, s)) {
      return false;
    }
    lexer->mark_end(lexer);
    lexer->result_symbol = DELIMITER;
    return true;
  } else {
    return false;
  }
}

bool tree_sitter_corpus_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  Scanner *s = (Scanner *)payload;
  if (valid_symbols[HEADER_DELIMITER] && parse_header_delimiter(lexer, s)) {
    return true;
  }
  if (valid_symbols[DELIMITER] && parse_delimiter(lexer, s)) {
    return true;
  }
  return false;
}

// ==============
// MEMORY-RELATED
// ==============

void *tree_sitter_corpus_external_scanner_create() {
  Scanner *s = (Scanner *)ts_malloc(sizeof(Scanner));
  s->delimiter = ts_malloc(sizeof(Array(int32_t)));
  array_init(s->delimiter);
  return s;
}

void tree_sitter_corpus_external_scanner_destroy(void *payload) {
  Scanner *s = (Scanner *)payload;
  for (size_t i = 0; i < s->delimiter->size; ++i) {
    ts_free(array_get(s->delimiter, i));
  }
  array_delete(s->delimiter);
  ts_free(s);
}

unsigned tree_sitter_corpus_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  Scanner *s = (Scanner *)payload;
  unsigned size = 0;
  for (size_t i = 0; i < s->delimiter->size; ++i) {
    buffer[size++] = *array_get(s->delimiter, i);
  }
  return size;
}

void tree_sitter_corpus_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
  Scanner *s = (Scanner *)payload;
  array_init(s->delimiter);
  size_t size = 0;
  while (size < length) {
    array_push(s->delimiter, buffer[size++]);
  }
}
