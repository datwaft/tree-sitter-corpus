#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_header_delimiter = 2,
  sym_header_text = 3,
  aux_sym_input_source_code_token1 = 4,
  sym_delimiter = 5,
  sym_source_file = 6,
  sym_test = 7,
  sym_header = 8,
  sym_input_source_code = 9,
  aux_sym_source_file_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_header_delimiter] = "header_delimiter",
  [sym_header_text] = "header_text",
  [aux_sym_input_source_code_token1] = "input_source_code_token1",
  [sym_delimiter] = "delimiter",
  [sym_source_file] = "source_file",
  [sym_test] = "test",
  [sym_header] = "header",
  [sym_input_source_code] = "input_source_code",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_header_delimiter] = sym_header_delimiter,
  [sym_header_text] = sym_header_text,
  [aux_sym_input_source_code_token1] = aux_sym_input_source_code_token1,
  [sym_delimiter] = sym_delimiter,
  [sym_source_file] = sym_source_file,
  [sym_test] = sym_test,
  [sym_header] = sym_header,
  [sym_input_source_code] = sym_input_source_code,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_header_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_header_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_input_source_code_token1] = {
    .visible = false,
    .named = false,
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
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_input_source_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_input_source_code_token1);
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_header_delimiter);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_header_delimiter);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_header_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_input_source_code_token1);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_input_source_code_token1);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_delimiter);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_delimiter);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_header_delimiter] = ACTIONS(1),
    [aux_sym_input_source_code_token1] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym_test] = STATE(2),
    [sym_header] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_header_delimiter] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_header_delimiter,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(3), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [14] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_header_delimiter,
    STATE(4), 1,
      sym_header,
    STATE(3), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [28] = 2,
    ACTIONS(14), 1,
      aux_sym_input_source_code_token1,
    STATE(11), 1,
      sym_input_source_code,
  [35] = 1,
    ACTIONS(16), 2,
      ts_builtin_sym_end,
      sym_header_delimiter,
  [40] = 2,
    ACTIONS(18), 1,
      anon_sym_LF,
    ACTIONS(20), 1,
      aux_sym_input_source_code_token1,
  [47] = 1,
    ACTIONS(22), 1,
      anon_sym_LF,
  [51] = 1,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
  [55] = 1,
    ACTIONS(26), 1,
      sym_header_text,
  [59] = 1,
    ACTIONS(28), 1,
      sym_delimiter,
  [63] = 1,
    ACTIONS(30), 1,
      sym_delimiter,
  [67] = 1,
    ACTIONS(32), 1,
      anon_sym_LF,
  [71] = 1,
    ACTIONS(34), 1,
      sym_header_delimiter,
  [75] = 1,
    ACTIONS(36), 1,
      aux_sym_input_source_code_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 47,
  [SMALL_STATE(8)] = 51,
  [SMALL_STATE(9)] = 55,
  [SMALL_STATE(10)] = 59,
  [SMALL_STATE(11)] = 63,
  [SMALL_STATE(12)] = 67,
  [SMALL_STATE(13)] = 71,
  [SMALL_STATE(14)] = 75,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [24] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_source_code, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, .production_id = 1),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
