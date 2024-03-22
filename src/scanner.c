#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

#define DELIMITER_SIZE 512

enum TokenType { HEADER_DELIMITER, DELIMITER };

static inline bool scan_header_delimiter(TSLexer *lexer);
static inline bool scan_delimiter(TSLexer *lexer);

void *tree_sitter_corpus_external_scanner_create() { return NULL; }

void tree_sitter_corpus_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_corpus_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}

void tree_sitter_corpus_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}

bool tree_sitter_corpus_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  if (valid_symbols[HEADER_DELIMITER]) {
    return scan_header_delimiter(lexer);
  }
  if (valid_symbols[DELIMITER]) {
    return scan_delimiter(lexer);
  }

  // UNREACHABLE
  return false;
}

static inline bool scan_header_delimiter(TSLexer *lexer) {
  while (lexer->lookahead == '=') {
    lexer->advance(lexer, false);
  }
  if (lexer->lookahead == '\n') {
    return true;
  }
  return false;
}

static inline bool scan_delimiter(TSLexer *lexer) {
  while (lexer->lookahead == '-') {
    lexer->advance(lexer, false);
  }
  if (lexer->lookahead == '\n') {
    return true;
  }
  return false;
}
