#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_header_text = 2,
  anon_sym_COLON = 3,
  aux_sym_attribute_token1 = 4,
  aux_sym_code_token1 = 5,
  sym_header_delimiter = 6,
  sym_delimiter = 7,
  sym_source_file = 8,
  sym_test_block = 9,
  sym_header = 10,
  sym_attribute = 11,
  sym_code = 12,
  sym_syntax_tree = 13,
  aux_sym_source_file_repeat1 = 14,
  aux_sym_header_repeat1 = 15,
  aux_sym_header_repeat2 = 16,
  aux_sym_code_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_header_text] = "header_text",
  [anon_sym_COLON] = ":",
  [aux_sym_attribute_token1] = "attribute_token1",
  [aux_sym_code_token1] = "code_token1",
  [sym_header_delimiter] = "header_delimiter",
  [sym_delimiter] = "delimiter",
  [sym_source_file] = "source_file",
  [sym_test_block] = "test_block",
  [sym_header] = "header",
  [sym_attribute] = "attribute",
  [sym_code] = "code",
  [sym_syntax_tree] = "syntax_tree",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_header_repeat2] = "header_repeat2",
  [aux_sym_code_repeat1] = "code_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_header_text] = sym_header_text,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [sym_header_delimiter] = sym_header_delimiter,
  [sym_delimiter] = sym_delimiter,
  [sym_source_file] = sym_source_file,
  [sym_test_block] = sym_test_block,
  [sym_header] = sym_header,
  [sym_attribute] = sym_attribute,
  [sym_code] = sym_code,
  [sym_syntax_tree] = sym_syntax_tree,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_header_repeat2] = aux_sym_header_repeat2,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_token1] = {
    .visible = false,
    .named = false,
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
  [sym_test_block] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
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
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat2] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '\r') SKIP(0)
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '\r') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (eof) ADVANCE(3);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 11, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 11, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 11, .external_lex_state = 2},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11, .external_lex_state = 3},
  [13] = {.lex_state = 11, .external_lex_state = 3},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 11, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_header_delimiter] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym_test_block] = STATE(3),
    [sym_header] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_header_delimiter] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      sym_header_delimiter,
    STATE(8), 1,
      aux_sym_header_repeat1,
    STATE(9), 1,
      aux_sym_header_repeat2,
    STATE(23), 1,
      sym_attribute,
  [19] = 4,
    ACTIONS(5), 1,
      sym_header_delimiter,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_header,
    STATE(4), 2,
      sym_test_block,
      aux_sym_source_file_repeat1,
  [33] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_header_delimiter,
    STATE(11), 1,
      sym_header,
    STATE(4), 2,
      sym_test_block,
      aux_sym_source_file_repeat1,
  [47] = 3,
    ACTIONS(22), 1,
      aux_sym_code_token1,
    STATE(7), 1,
      aux_sym_code_repeat1,
    ACTIONS(20), 2,
      sym_header_delimiter,
      ts_builtin_sym_end,
  [58] = 4,
    ACTIONS(24), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      sym_header_delimiter,
    STATE(6), 1,
      aux_sym_header_repeat2,
    STATE(23), 1,
      sym_attribute,
  [71] = 3,
    ACTIONS(31), 1,
      aux_sym_code_token1,
    STATE(7), 1,
      aux_sym_code_repeat1,
    ACTIONS(29), 2,
      sym_header_delimiter,
      ts_builtin_sym_end,
  [82] = 3,
    ACTIONS(34), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_header_repeat1,
    ACTIONS(37), 2,
      sym_header_delimiter,
      anon_sym_COLON,
  [93] = 4,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      sym_header_delimiter,
    STATE(6), 1,
      aux_sym_header_repeat2,
    STATE(23), 1,
      sym_attribute,
  [106] = 1,
    ACTIONS(29), 3,
      sym_header_delimiter,
      ts_builtin_sym_end,
      aux_sym_code_token1,
  [112] = 3,
    ACTIONS(41), 1,
      aux_sym_code_token1,
    STATE(12), 1,
      aux_sym_code_repeat1,
    STATE(21), 1,
      sym_code,
  [122] = 3,
    ACTIONS(41), 1,
      aux_sym_code_token1,
    ACTIONS(43), 1,
      sym_delimiter,
    STATE(13), 1,
      aux_sym_code_repeat1,
  [132] = 3,
    ACTIONS(29), 1,
      sym_delimiter,
    ACTIONS(45), 1,
      aux_sym_code_token1,
    STATE(13), 1,
      aux_sym_code_repeat1,
  [142] = 3,
    ACTIONS(22), 1,
      aux_sym_code_token1,
    STATE(5), 1,
      aux_sym_code_repeat1,
    STATE(20), 1,
      sym_syntax_tree,
  [152] = 2,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(50), 1,
      aux_sym_code_token1,
  [159] = 2,
    ACTIONS(52), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_header_repeat1,
  [166] = 1,
    ACTIONS(29), 2,
      sym_delimiter,
      aux_sym_code_token1,
  [171] = 1,
    ACTIONS(27), 2,
      sym_header_delimiter,
      anon_sym_COLON,
  [176] = 2,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(56), 1,
      aux_sym_code_token1,
  [183] = 1,
    ACTIONS(58), 2,
      sym_header_delimiter,
      ts_builtin_sym_end,
  [188] = 1,
    ACTIONS(60), 1,
      sym_delimiter,
  [192] = 1,
    ACTIONS(62), 1,
      aux_sym_attribute_token1,
  [196] = 1,
    ACTIONS(64), 1,
      anon_sym_LF,
  [200] = 1,
    ACTIONS(50), 1,
      aux_sym_code_token1,
  [204] = 1,
    ACTIONS(66), 1,
      anon_sym_LF,
  [208] = 1,
    ACTIONS(68), 1,
      anon_sym_LF,
  [212] = 1,
    ACTIONS(70), 1,
      anon_sym_LF,
  [216] = 1,
    ACTIONS(72), 1,
      anon_sym_LF,
  [220] = 1,
    ACTIONS(74), 1,
      aux_sym_code_token1,
  [224] = 1,
    ACTIONS(76), 1,
      sym_header_text,
  [228] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [232] = 1,
    ACTIONS(80), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 122,
  [SMALL_STATE(13)] = 132,
  [SMALL_STATE(14)] = 142,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 159,
  [SMALL_STATE(17)] = 166,
  [SMALL_STATE(18)] = 171,
  [SMALL_STATE(19)] = 176,
  [SMALL_STATE(20)] = 183,
  [SMALL_STATE(21)] = 188,
  [SMALL_STATE(22)] = 192,
  [SMALL_STATE(23)] = 196,
  [SMALL_STATE(24)] = 200,
  [SMALL_STATE(25)] = 204,
  [SMALL_STATE(26)] = 208,
  [SMALL_STATE(27)] = 212,
  [SMALL_STATE(28)] = 216,
  [SMALL_STATE(29)] = 220,
  [SMALL_STATE(30)] = 224,
  [SMALL_STATE(31)] = 228,
  [SMALL_STATE(32)] = 232,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_tree, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat2, 2), SHIFT_REPEAT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat2, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(32),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(28),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_block, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 7),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
