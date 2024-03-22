#include "tree_sitter/parser.h"

typedef enum { HEADER_DELIMITER, DELIMITER } TokenType;

static uint8_t consume_chars(TSLexer *lexer, int32_t c) {
  uint8_t count = 0;
  while (lexer->lookahead == c) {
    lexer->advance(lexer, false);
    count += 1;
  }
  return count;
}

static bool parse_header_delimiter(TSLexer *lexer) {
  lexer->mark_end(lexer);

  uint8_t count = consume_chars(lexer, '=');
  if (count >= 3) {
    lexer->mark_end(lexer);
    lexer->result_symbol = HEADER_DELIMITER;
    return true;
  } else {
    return false;
  }
}

static bool parse_delimiter(TSLexer *lexer) {
  lexer->mark_end(lexer);

  uint8_t count = consume_chars(lexer, '-');
  if (count >= 3) {
    lexer->mark_end(lexer);
    lexer->result_symbol = DELIMITER;
    return true;
  } else {
    return false;
  }
}

bool tree_sitter_corpus_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  if (valid_symbols[HEADER_DELIMITER] && parse_header_delimiter(lexer)) {
    return true;
  }
  if (valid_symbols[DELIMITER] && parse_delimiter(lexer)) {
    return true;
  }
  return false;
}

// ==============
// MEMORY-RELATED
// ==============

void *tree_sitter_corpus_external_scanner_create() { return NULL; }

void tree_sitter_corpus_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_corpus_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}

void tree_sitter_corpus_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}
