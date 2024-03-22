#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_header_text = 2,
  aux_sym_code_token1 = 3,
  sym_header_delimiter = 4,
  sym_delimiter = 5,
  sym_source_file = 6,
  sym_test = 7,
  sym_code = 8,
  sym_syntax_tree = 9,
  aux_sym_source_file_repeat1 = 10,
  aux_sym_code_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_header_text] = "header_text",
  [aux_sym_code_token1] = "code_token1",
  [sym_header_delimiter] = "header_delimiter",
  [sym_delimiter] = "delimiter",
  [sym_source_file] = "source_file",
  [sym_test] = "test",
  [sym_code] = "code",
  [sym_syntax_tree] = "syntax_tree",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_header_text] = sym_header_text,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [sym_header_delimiter] = sym_header_delimiter,
  [sym_delimiter] = sym_delimiter,
  [sym_source_file] = sym_source_file,
  [sym_test] = sym_test,
  [sym_code] = sym_code,
  [sym_syntax_tree] = sym_syntax_tree,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_header_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_header_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax_tree] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 2,
  [10] = 10,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '\r') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (eof) ADVANCE(2);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 8, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 8, .external_lex_state = 2},
  [6] = {.lex_state = 8, .external_lex_state = 2},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8, .external_lex_state = 3},
  [10] = {.lex_state = 8, .external_lex_state = 3},
  [11] = {.lex_state = 8, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_header_delimiter] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_test] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_header_delimiter] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      aux_sym_code_token1,
    STATE(2), 1,
      aux_sym_code_repeat1,
    ACTIONS(7), 2,
      sym_header_delimiter,
      ts_builtin_sym_end,
  [11] = 3,
    ACTIONS(5), 1,
      sym_header_delimiter,
    ACTIONS(12), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [22] = 3,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      sym_header_delimiter,
    STATE(4), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [33] = 3,
    ACTIONS(21), 1,
      aux_sym_code_token1,
    STATE(2), 1,
      aux_sym_code_repeat1,
    ACTIONS(19), 2,
      sym_header_delimiter,
      ts_builtin_sym_end,
  [44] = 1,
    ACTIONS(7), 3,
      sym_header_delimiter,
      ts_builtin_sym_end,
      aux_sym_code_token1,
  [50] = 3,
    ACTIONS(21), 1,
      aux_sym_code_token1,
    STATE(5), 1,
      aux_sym_code_repeat1,
    STATE(12), 1,
      sym_syntax_tree,
  [60] = 3,
    ACTIONS(23), 1,
      aux_sym_code_token1,
    STATE(10), 1,
      aux_sym_code_repeat1,
    STATE(14), 1,
      sym_code,
  [70] = 3,
    ACTIONS(7), 1,
      sym_delimiter,
    ACTIONS(25), 1,
      aux_sym_code_token1,
    STATE(9), 1,
      aux_sym_code_repeat1,
  [80] = 3,
    ACTIONS(23), 1,
      aux_sym_code_token1,
    ACTIONS(28), 1,
      sym_delimiter,
    STATE(9), 1,
      aux_sym_code_repeat1,
  [90] = 1,
    ACTIONS(7), 2,
      sym_delimiter,
      aux_sym_code_token1,
  [95] = 1,
    ACTIONS(30), 2,
      sym_header_delimiter,
      ts_builtin_sym_end,
  [100] = 1,
    ACTIONS(32), 1,
      sym_header_text,
  [104] = 1,
    ACTIONS(34), 1,
      sym_delimiter,
  [108] = 1,
    ACTIONS(36), 1,
      anon_sym_LF,
  [112] = 1,
    ACTIONS(38), 1,
      anon_sym_LF,
  [116] = 1,
    ACTIONS(40), 1,
      anon_sym_LF,
  [120] = 1,
    ACTIONS(42), 1,
      anon_sym_LF,
  [124] = 1,
    ACTIONS(44), 1,
      sym_header_delimiter,
  [128] = 1,
    ACTIONS(46), 1,
      anon_sym_LF,
  [132] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [136] = 1,
    ACTIONS(50), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 80,
  [SMALL_STATE(11)] = 90,
  [SMALL_STATE(12)] = 95,
  [SMALL_STATE(13)] = 100,
  [SMALL_STATE(14)] = 104,
  [SMALL_STATE(15)] = 108,
  [SMALL_STATE(16)] = 112,
  [SMALL_STATE(17)] = 116,
  [SMALL_STATE(18)] = 120,
  [SMALL_STATE(19)] = 124,
  [SMALL_STATE(20)] = 128,
  [SMALL_STATE(21)] = 132,
  [SMALL_STATE(22)] = 136,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(22),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_tree, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(17),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 10),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_header_delimiter = 0,
  ts_external_token_delimiter = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_header_delimiter] = sym_header_delimiter,
  [ts_external_token_delimiter] = sym_delimiter,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_header_delimiter] = true,
    [ts_external_token_delimiter] = true,
  },
  [2] = {
    [ts_external_token_header_delimiter] = true,
  },
  [3] = {
    [ts_external_token_delimiter] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_corpus_external_scanner_create(void);
void tree_sitter_corpus_external_scanner_destroy(void *);
bool tree_sitter_corpus_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_corpus_external_scanner_serialize(void *, char *);
void tree_sitter_corpus_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_corpus() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_corpus_external_scanner_create,
      tree_sitter_corpus_external_scanner_destroy,
      tree_sitter_corpus_external_scanner_scan,
      tree_sitter_corpus_external_scanner_serialize,
      tree_sitter_corpus_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
