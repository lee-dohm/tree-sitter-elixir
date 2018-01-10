#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 10
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_sigil = 1,
  sym_atom = 2,
  sym_charlist = 3,
  sym_string = 4,
  sym_integer = 5,
  sym_float = 6,
  sym_true = 7,
  sym_false = 8,
  sym_nil = 9,
  sym_file = 10,
  sym__statement = 11,
  sym_expression_statement = 12,
  sym__literal = 13,
  sym__reserved_literal = 14,
  aux_sym_file_repeat1 = 15,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_sigil] = "sigil",
  [sym_atom] = "atom",
  [sym_charlist] = "charlist",
  [sym_string] = "string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_nil] = "nil",
  [sym_file] = "file",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__literal] = "_literal",
  [sym__reserved_literal] = "_reserved_literal",
  [aux_sym_file_repeat1] = "file_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_sigil] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_charlist] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__reserved_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '0')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == '_')
        ADVANCE(27);
      if (lookahead == 'f')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(36);
      if (lookahead == 't')
        ADVANCE(39);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\"')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '\n')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == '\n')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 11:
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '\\')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(18);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_charlist);
      if (lookahead == '\'')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_charlist);
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '\n')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '\'')
        ADVANCE(19);
      if (lookahead == '\\')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_charlist);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(21);
      if (lookahead == '_')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead == '_')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'B')
        ADVANCE(24);
      if (lookahead == 'O')
        ADVANCE(25);
      if (lookahead == 'X')
        ADVANCE(26);
      if (lookahead == '_')
        ADVANCE(27);
      if (lookahead == 'b')
        ADVANCE(24);
      if (lookahead == 'o')
        ADVANCE(25);
      if (lookahead == 'x')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '_')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 31:
      if (lookahead == 'a')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'l')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 's')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'e')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 36:
      if (lookahead == 'i')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'l')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 39:
      if (lookahead == 'r')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'u')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'e')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 43:
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '\"')
        ADVANCE(45);
      if (lookahead == '\'')
        ADVANCE(47);
      if (lookahead == '(')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '<')
        ADVANCE(50);
      if (lookahead == '[')
        ADVANCE(51);
      if (lookahead == '{')
        ADVANCE(52);
      if (lookahead == '|')
        ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == '\"')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_sigil);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '\'')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == ')')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == ']')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_sigil] = ACTIONS(3),
    [sym_atom] = ACTIONS(3),
    [sym_charlist] = ACTIONS(3),
    [sym_string] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(4),
    [sym__statement] = STATE(5),
    [sym_expression_statement] = STATE(6),
    [sym__literal] = STATE(7),
    [sym__reserved_literal] = STATE(7),
    [aux_sym_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_sigil] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_nil] = ACTIONS(9),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_sigil] = ACTIONS(13),
    [sym_atom] = ACTIONS(13),
    [sym_charlist] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_integer] = ACTIONS(13),
    [sym_float] = ACTIONS(13),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_nil] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_sigil] = ACTIONS(17),
    [sym_atom] = ACTIONS(17),
    [sym_charlist] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(17),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_sigil] = ACTIONS(23),
    [sym_atom] = ACTIONS(23),
    [sym_charlist] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [sym_integer] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_nil] = ACTIONS(21),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_sigil] = ACTIONS(27),
    [sym_atom] = ACTIONS(27),
    [sym_charlist] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_nil] = ACTIONS(25),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_sigil] = ACTIONS(31),
    [sym_atom] = ACTIONS(31),
    [sym_charlist] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_integer] = ACTIONS(31),
    [sym_float] = ACTIONS(31),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
    [sym_nil] = ACTIONS(29),
  },
  [8] = {
    [sym__statement] = STATE(9),
    [sym_expression_statement] = STATE(6),
    [sym__literal] = STATE(7),
    [sym__reserved_literal] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_sigil] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_nil] = ACTIONS(9),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_sigil] = ACTIONS(37),
    [sym_atom] = ACTIONS(37),
    [sym_charlist] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [sym_integer] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file, 0),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__reserved_literal, 1),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__reserved_literal, 1),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_file_repeat1, 1),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_file_repeat1, 1),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file, 1),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_file_repeat1, 2),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_file_repeat1, 2),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elixir() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
