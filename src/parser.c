#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 1
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_header_text = 2,
  anon_sym_COLONskip = 3,
  anon_sym_COLONerror = 4,
  anon_sym_COLONfail_DASHfast = 5,
  anon_sym_COLONlanguage = 6,
  anon_sym_LPAREN = 7,
  aux_sym_attribute_token1 = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COLONplatform = 10,
  aux_sym_code_token1 = 11,
  sym_header_delimiter = 12,
  sym_delimiter = 13,
  sym_source_file = 14,
  sym_test_block = 15,
  sym_header = 16,
  sym_attribute = 17,
  sym_code = 18,
  sym_syntax_tree = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_test_block_repeat1 = 21,
  aux_sym_header_repeat1 = 22,
  aux_sym_code_repeat1 = 23,
  alias_sym_platform = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_header_text] = "header_text",
  [anon_sym_COLONskip] = ":skip",
  [anon_sym_COLONerror] = ":error",
  [anon_sym_COLONfail_DASHfast] = ":fail-fast",
  [anon_sym_COLONlanguage] = ":language",
  [anon_sym_LPAREN] = "(",
  [aux_sym_attribute_token1] = "language",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLONplatform] = ":platform",
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
  [alias_sym_platform] = "platform",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_header_text] = sym_header_text,
  [anon_sym_COLONskip] = anon_sym_COLONskip,
  [anon_sym_COLONerror] = anon_sym_COLONerror,
  [anon_sym_COLONfail_DASHfast] = anon_sym_COLONfail_DASHfast,
  [anon_sym_COLONlanguage] = anon_sym_COLONlanguage,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLONplatform] = anon_sym_COLONplatform,
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
  [alias_sym_platform] = alias_sym_platform,
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
  [anon_sym_COLONskip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONfail_DASHfast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONlanguage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONplatform] = {
    .visible = true,
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
  [alias_sym_platform] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_platform,
  },
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
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 12,
  [26] = 26,
  [27] = 27,
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == ':') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLONskip);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLONerror);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLONfail_DASHfast);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLONlanguage);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '\r') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLONplatform);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (eof) ADVANCE(32);
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
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
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 47, .external_lex_state = 2},
  [10] = {.lex_state = 47, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 47, .external_lex_state = 2},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 47, .external_lex_state = 3},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 47, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 47, .external_lex_state = 3},
  [26] = {.lex_state = 47},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 41},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COLONskip] = ACTIONS(1),
    [anon_sym_COLONerror] = ACTIONS(1),
    [anon_sym_COLONfail_DASHfast] = ACTIONS(1),
    [anon_sym_COLONlanguage] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLONplatform] = ACTIONS(1),
    [sym_header_delimiter] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym_test_block] = STATE(6),
    [sym_header] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_test_block_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_header_delimiter] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_COLONlanguage,
    ACTIONS(15), 1,
      anon_sym_COLONplatform,
    ACTIONS(17), 1,
      sym_header_delimiter,
    STATE(4), 1,
      aux_sym_header_repeat1,
    STATE(5), 1,
      aux_sym_test_block_repeat1,
    STATE(28), 1,
      sym_attribute,
    ACTIONS(11), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [27] = 6,
    ACTIONS(22), 1,
      anon_sym_COLONlanguage,
    ACTIONS(25), 1,
      anon_sym_COLONplatform,
    ACTIONS(28), 1,
      sym_header_delimiter,
    STATE(3), 1,
      aux_sym_header_repeat1,
    STATE(28), 1,
      sym_attribute,
    ACTIONS(19), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [48] = 6,
    ACTIONS(13), 1,
      anon_sym_COLONlanguage,
    ACTIONS(15), 1,
      anon_sym_COLONplatform,
    ACTIONS(30), 1,
      sym_header_delimiter,
    STATE(3), 1,
      aux_sym_header_repeat1,
    STATE(28), 1,
      sym_attribute,
    ACTIONS(11), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [69] = 3,
    ACTIONS(32), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_test_block_repeat1,
    ACTIONS(35), 6,
      sym_header_delimiter,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
  [84] = 6,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      sym_header_delimiter,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_test_block_repeat1,
    STATE(21), 1,
      sym_header,
    STATE(7), 2,
      sym_test_block,
      aux_sym_source_file_repeat1,
  [104] = 6,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(44), 1,
      sym_header_delimiter,
    STATE(11), 1,
      aux_sym_test_block_repeat1,
    STATE(21), 1,
      sym_header,
    STATE(7), 2,
      sym_test_block,
      aux_sym_source_file_repeat1,
  [124] = 1,
    ACTIONS(28), 6,
      sym_header_delimiter,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
  [133] = 4,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      aux_sym_code_token1,
    STATE(10), 1,
      aux_sym_code_repeat1,
    ACTIONS(47), 2,
      sym_header_delimiter,
      ts_builtin_sym_end,
  [147] = 4,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 1,
      aux_sym_code_token1,
    STATE(10), 1,
      aux_sym_code_repeat1,
    ACTIONS(53), 2,
      sym_header_delimiter,
      ts_builtin_sym_end,
  [161] = 4,
    ACTIONS(7), 1,
      sym_header_delimiter,
    ACTIONS(9), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_test_block_repeat1,
    STATE(16), 1,
      sym_header,
  [174] = 2,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(53), 3,
      sym_header_delimiter,
      ts_builtin_sym_end,
      aux_sym_code_token1,
  [183] = 4,
    ACTIONS(51), 1,
      aux_sym_code_token1,
    ACTIONS(60), 1,
      anon_sym_LF,
    STATE(9), 1,
      aux_sym_code_repeat1,
    STATE(20), 1,
      sym_syntax_tree,
  [196] = 4,
    ACTIONS(51), 1,
      aux_sym_code_token1,
    ACTIONS(62), 1,
      anon_sym_LF,
    STATE(9), 1,
      aux_sym_code_repeat1,
    STATE(23), 1,
      sym_syntax_tree,
  [209] = 3,
    ACTIONS(64), 1,
      aux_sym_code_token1,
    ACTIONS(66), 1,
      sym_delimiter,
    STATE(17), 1,
      aux_sym_code_repeat1,
  [219] = 3,
    ACTIONS(64), 1,
      aux_sym_code_token1,
    STATE(15), 1,
      aux_sym_code_repeat1,
    STATE(44), 1,
      sym_code,
  [229] = 3,
    ACTIONS(53), 1,
      sym_delimiter,
    ACTIONS(68), 1,
      aux_sym_code_token1,
    STATE(17), 1,
      aux_sym_code_repeat1,
  [239] = 1,
    ACTIONS(71), 3,
      sym_header_delimiter,
      ts_builtin_sym_end,
      anon_sym_LF,
  [245] = 3,
    ACTIONS(51), 1,
      aux_sym_code_token1,
    STATE(9), 1,
      aux_sym_code_repeat1,
    STATE(23), 1,
      sym_syntax_tree,
  [255] = 1,
    ACTIONS(73), 3,
      sym_header_delimiter,
      ts_builtin_sym_end,
      anon_sym_LF,
  [261] = 3,
    ACTIONS(64), 1,
      aux_sym_code_token1,
    STATE(15), 1,
      aux_sym_code_repeat1,
    STATE(45), 1,
      sym_code,
  [271] = 3,
    ACTIONS(51), 1,
      aux_sym_code_token1,
    STATE(9), 1,
      aux_sym_code_repeat1,
    STATE(18), 1,
      sym_syntax_tree,
  [281] = 1,
    ACTIONS(75), 3,
      sym_header_delimiter,
      ts_builtin_sym_end,
      anon_sym_LF,
  [287] = 2,
    ACTIONS(77), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_test_block_repeat1,
  [294] = 1,
    ACTIONS(53), 2,
      sym_delimiter,
      aux_sym_code_token1,
  [299] = 2,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      aux_sym_code_token1,
  [306] = 2,
    ACTIONS(83), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      aux_sym_code_token1,
  [313] = 1,
    ACTIONS(87), 1,
      anon_sym_LF,
  [317] = 1,
    ACTIONS(89), 1,
      sym_header_text,
  [321] = 1,
    ACTIONS(91), 1,
      anon_sym_LF,
  [325] = 1,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
  [329] = 1,
    ACTIONS(81), 1,
      aux_sym_code_token1,
  [333] = 1,
    ACTIONS(95), 1,
      aux_sym_attribute_token1,
  [337] = 1,
    ACTIONS(97), 1,
      aux_sym_attribute_token1,
  [341] = 1,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
  [345] = 1,
    ACTIONS(101), 1,
      anon_sym_LF,
  [349] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [353] = 1,
    ACTIONS(105), 1,
      anon_sym_LF,
  [357] = 1,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
  [361] = 1,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
  [365] = 1,
    ACTIONS(111), 1,
      aux_sym_code_token1,
  [369] = 1,
    ACTIONS(113), 1,
      anon_sym_LF,
  [373] = 1,
    ACTIONS(115), 1,
      anon_sym_LF,
  [377] = 1,
    ACTIONS(117), 1,
      sym_delimiter,
  [381] = 1,
    ACTIONS(119), 1,
      sym_delimiter,
  [385] = 1,
    ACTIONS(121), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 183,
  [SMALL_STATE(14)] = 196,
  [SMALL_STATE(15)] = 209,
  [SMALL_STATE(16)] = 219,
  [SMALL_STATE(17)] = 229,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 245,
  [SMALL_STATE(20)] = 255,
  [SMALL_STATE(21)] = 261,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 281,
  [SMALL_STATE(24)] = 287,
  [SMALL_STATE(25)] = 294,
  [SMALL_STATE(26)] = 299,
  [SMALL_STATE(27)] = 306,
  [SMALL_STATE(28)] = 313,
  [SMALL_STATE(29)] = 317,
  [SMALL_STATE(30)] = 321,
  [SMALL_STATE(31)] = 325,
  [SMALL_STATE(32)] = 329,
  [SMALL_STATE(33)] = 333,
  [SMALL_STATE(34)] = 337,
  [SMALL_STATE(35)] = 341,
  [SMALL_STATE(36)] = 345,
  [SMALL_STATE(37)] = 349,
  [SMALL_STATE(38)] = 353,
  [SMALL_STATE(39)] = 357,
  [SMALL_STATE(40)] = 361,
  [SMALL_STATE(41)] = 365,
  [SMALL_STATE(42)] = 369,
  [SMALL_STATE(43)] = 373,
  [SMALL_STATE(44)] = 377,
  [SMALL_STATE(45)] = 381,
  [SMALL_STATE(46)] = 385,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(36),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(35),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(31),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_block_repeat1, 2), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_block_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_tree, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax_tree, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(46),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_block, 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_block, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_block, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [103] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
