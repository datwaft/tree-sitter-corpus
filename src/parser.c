#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
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
  aux_sym_test_block_repeat1 = 15,
  aux_sym_header_repeat1 = 16,
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
  [aux_sym_test_block_repeat1] = "test_block_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
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
  [aux_sym_test_block_repeat1] = aux_sym_test_block_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
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
  [aux_sym_test_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 5,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 8,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 30,
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
  [6] = {.lex_state = 11, .external_lex_state = 2},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 11, .external_lex_state = 3},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 11, .external_lex_state = 3},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 11, .external_lex_state = 3},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
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
    [sym_source_file] = STATE(38),
    [sym_test_block] = STATE(2),
    [sym_header] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_test_block_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_header_delimiter] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      sym_header_delimiter,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_test_block_repeat1,
    STATE(16), 1,
      sym_header,
    STATE(3), 2,
      sym_test_block,
      aux_sym_source_file_repeat1,
  [20] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(16), 1,
      sym_header_delimiter,
    STATE(10), 1,
      aux_sym_test_block_repeat1,
    STATE(16), 1,
      sym_header,
    STATE(3), 2,
      sym_test_block,
      aux_sym_source_file_repeat1,
  [40] = 6,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      sym_header_delimiter,
    STATE(11), 1,
      aux_sym_header_repeat1,
    STATE(13), 1,
      aux_sym_test_block_repeat1,
    STATE(29), 1,
      sym_attribute,
  [59] = 4,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      aux_sym_code_token1,
    STATE(5), 1,
      aux_sym_code_repeat1,
    ACTIONS(25), 2,
      sym_header_delimiter,
      ts_builtin_sym_end,
  [73] = 4,
    ACTIONS(34), 1,
      anon_sym_LF,
    ACTIONS(36), 1,
      aux_sym_code_token1,
    STATE(5), 1,
      aux_sym_code_repeat1,
    ACTIONS(32), 2,
      sym_header_delimiter,
      ts_builtin_sym_end,
  [87] = 4,
    ACTIONS(36), 1,
      aux_sym_code_token1,
    ACTIONS(38), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_code_repeat1,
    STATE(21), 1,
      sym_syntax_tree,
  [100] = 2,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(25), 3,
      sym_header_delimiter,
      ts_builtin_sym_end,
      aux_sym_code_token1,
  [109] = 4,
    ACTIONS(40), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      sym_header_delimiter,
    STATE(9), 1,
      aux_sym_header_repeat1,
    STATE(29), 1,
      sym_attribute,
  [122] = 4,
    ACTIONS(7), 1,
      sym_header_delimiter,
    ACTIONS(19), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_test_block_repeat1,
    STATE(19), 1,
      sym_header,
  [135] = 4,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      sym_header_delimiter,
    STATE(9), 1,
      aux_sym_header_repeat1,
    STATE(29), 1,
      sym_attribute,
  [148] = 4,
    ACTIONS(36), 1,
      aux_sym_code_token1,
    ACTIONS(47), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_code_repeat1,
    STATE(15), 1,
      sym_syntax_tree,
  [161] = 3,
    ACTIONS(49), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_test_block_repeat1,
    ACTIONS(52), 2,
      sym_header_delimiter,
      anon_sym_COLON,
  [172] = 3,
    ACTIONS(36), 1,
      aux_sym_code_token1,
    STATE(6), 1,
      aux_sym_code_repeat1,
    STATE(15), 1,
      sym_syntax_tree,
  [182] = 1,
    ACTIONS(54), 3,
      sym_header_delimiter,
      ts_builtin_sym_end,
      anon_sym_LF,
  [188] = 3,
    ACTIONS(56), 1,
      aux_sym_code_token1,
    STATE(22), 1,
      aux_sym_code_repeat1,
    STATE(31), 1,
      sym_code,
  [198] = 1,
    ACTIONS(58), 3,
      sym_header_delimiter,
      ts_builtin_sym_end,
      anon_sym_LF,
  [204] = 3,
    ACTIONS(25), 1,
      sym_delimiter,
    ACTIONS(60), 1,
      aux_sym_code_token1,
    STATE(18), 1,
      aux_sym_code_repeat1,
  [214] = 3,
    ACTIONS(56), 1,
      aux_sym_code_token1,
    STATE(22), 1,
      aux_sym_code_repeat1,
    STATE(36), 1,
      sym_code,
  [224] = 3,
    ACTIONS(36), 1,
      aux_sym_code_token1,
    STATE(6), 1,
      aux_sym_code_repeat1,
    STATE(17), 1,
      sym_syntax_tree,
  [234] = 1,
    ACTIONS(63), 3,
      sym_header_delimiter,
      ts_builtin_sym_end,
      anon_sym_LF,
  [240] = 3,
    ACTIONS(56), 1,
      aux_sym_code_token1,
    ACTIONS(65), 1,
      sym_delimiter,
    STATE(18), 1,
      aux_sym_code_repeat1,
  [250] = 2,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(69), 1,
      aux_sym_code_token1,
  [257] = 2,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(73), 1,
      aux_sym_code_token1,
  [264] = 2,
    ACTIONS(75), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_test_block_repeat1,
  [271] = 1,
    ACTIONS(43), 2,
      sym_header_delimiter,
      anon_sym_COLON,
  [276] = 1,
    ACTIONS(25), 2,
      sym_delimiter,
      aux_sym_code_token1,
  [281] = 1,
    ACTIONS(77), 1,
      aux_sym_attribute_token1,
  [285] = 1,
    ACTIONS(79), 1,
      anon_sym_LF,
  [289] = 1,
    ACTIONS(81), 1,
      anon_sym_LF,
  [293] = 1,
    ACTIONS(83), 1,
      sym_delimiter,
  [297] = 1,
    ACTIONS(69), 1,
      aux_sym_code_token1,
  [301] = 1,
    ACTIONS(85), 1,
      anon_sym_LF,
  [305] = 1,
    ACTIONS(87), 1,
      anon_sym_LF,
  [309] = 1,
    ACTIONS(89), 1,
      sym_header_text,
  [313] = 1,
    ACTIONS(91), 1,
      sym_delimiter,
  [317] = 1,
    ACTIONS(93), 1,
      aux_sym_code_token1,
  [321] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
  [325] = 1,
    ACTIONS(97), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 135,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 172,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 188,
  [SMALL_STATE(17)] = 198,
  [SMALL_STATE(18)] = 204,
  [SMALL_STATE(19)] = 214,
  [SMALL_STATE(20)] = 224,
  [SMALL_STATE(21)] = 234,
  [SMALL_STATE(22)] = 240,
  [SMALL_STATE(23)] = 250,
  [SMALL_STATE(24)] = 257,
  [SMALL_STATE(25)] = 264,
  [SMALL_STATE(26)] = 271,
  [SMALL_STATE(27)] = 276,
  [SMALL_STATE(28)] = 281,
  [SMALL_STATE(29)] = 285,
  [SMALL_STATE(30)] = 289,
  [SMALL_STATE(31)] = 293,
  [SMALL_STATE(32)] = 297,
  [SMALL_STATE(33)] = 301,
  [SMALL_STATE(34)] = 305,
  [SMALL_STATE(35)] = 309,
  [SMALL_STATE(36)] = 313,
  [SMALL_STATE(37)] = 317,
  [SMALL_STATE(38)] = 321,
  [SMALL_STATE(39)] = 325,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(39),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_tree, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax_tree, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_block_repeat1, 2), SHIFT_REPEAT(13),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_block_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_block, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_block, 6),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(30),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_block, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 7),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
