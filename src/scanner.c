#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"

#define DELIMITER_SIZE 512

enum TokenType { HEADER_DELIMITER, DELIMITER };

bool scan_header_delimiter(char *delimiter, TSLexer *lexer);
bool scan_delimiter(char *delimiter, TSLexer *lexer);

void *tree_sitter_corpus_external_scanner_create() {
  return ts_malloc(sizeof(char) * DELIMITER_SIZE);
}

void tree_sitter_corpus_external_scanner_destroy(void *payload) {
  ts_free(payload);
}

unsigned tree_sitter_corpus_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  memcpy(buffer, payload, DELIMITER_SIZE);
  return DELIMITER_SIZE;
}

void tree_sitter_corpus_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
  memcpy(payload, buffer, DELIMITER_SIZE);
}

bool tree_sitter_corpus_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  char *delimiter = (char *)payload;

  if (valid_symbols[HEADER_DELIMITER]) {
    return scan_header_delimiter(delimiter, lexer);
  }
  if (valid_symbols[DELIMITER]) {
    return scan_delimiter(delimiter, lexer);
  }

  // UNREACHABLE
  return false;
}

bool scan_header_delimiter(char *delimiter, TSLexer *lexer) {
  while (lexer->lookahead == '=') {
    lexer->advance(lexer, false);
  }
  if (lexer->lookahead == '\n') {
    return true;
  }
  return false;
}

bool scan_delimiter(char *delimiter, TSLexer *lexer) {
  while (lexer->lookahead == '-') {
    lexer->advance(lexer, false);
  }
  if (lexer->lookahead == '\n') {
    return true;
  }
  return false;
}
