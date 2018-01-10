#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 48
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_EQ_GT = 1,
  anon_sym_PERCENT_LBRACE = 2,
  anon_sym_COMMA = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LBRACE = 5,
  sym_sigil = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  sym_atom = 9,
  sym_charlist = 10,
  sym_string = 11,
  sym_integer = 12,
  sym_float = 13,
  sym_true = 14,
  sym_false = 15,
  sym_nil = 16,
  sym_file = 17,
  sym__statement = 18,
  sym_expression_statement = 19,
  sym__expression = 20,
  sym__literal = 21,
  sym__map_element = 22,
  sym_map = 23,
  sym_tuple = 24,
  sym__keyword_list_entry = 25,
  sym_list = 26,
  sym__reserved_literal = 27,
  aux_sym_file_repeat1 = 28,
  aux_sym_map_repeat1 = 29,
  aux_sym_tuple_repeat1 = 30,
  aux_sym_list_repeat1 = 31,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [sym_sigil] = "sigil",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym__map_element] = "_map_element",
  [sym_map] = "map",
  [sym_tuple] = "tuple",
  [sym__keyword_list_entry] = "_keyword_list_entry",
  [sym_list] = "list",
  [sym__reserved_literal] = "_reserved_literal",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_sigil] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__map_element] = {
    .visible = false,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__keyword_list_entry] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
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
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
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
      if (lookahead == '%')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(22);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == 'n')
        ADVANCE(46);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == '{')
        ADVANCE(53);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == '~')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
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
      if (lookahead == '{')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 13:
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '\\')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(20);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_charlist);
      if (lookahead == '\'')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\n')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '\n')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_charlist);
      if (lookahead == '\n')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == '\n')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '\'')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_charlist);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(24);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '_')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == 'B')
        ADVANCE(27);
      if (lookahead == 'O')
        ADVANCE(28);
      if (lookahead == 'X')
        ADVANCE(29);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == 'b')
        ADVANCE(27);
      if (lookahead == 'o')
        ADVANCE(28);
      if (lookahead == 'x')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(27);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '_')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 31:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 34:
      if (lookahead == '>')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '_')
        ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == ':')
        ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == 'a')
        ADVANCE(42);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == 'l')
        ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == 's')
        ADVANCE(44);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == 'e')
        ADVANCE(45);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == 'l')
        ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == 'r')
        ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == 'u')
        ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == 'e')
        ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '\"')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(59);
      if (lookahead == '(')
        ADVANCE(60);
      if (lookahead == '/')
        ADVANCE(61);
      if (lookahead == '<')
        ADVANCE(62);
      if (lookahead == '[')
        ADVANCE(63);
      if (lookahead == '{')
        ADVANCE(64);
      if (lookahead == '|')
        ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == '\"')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_sigil);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '\'')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == ')')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '/')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == ']')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '}')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '|')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(65);
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_sigil] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_atom] = ACTIONS(3),
    [sym_charlist] = ACTIONS(3),
    [sym_string] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [sym_true] = ACTIONS(3),
    [sym_false] = ACTIONS(3),
    [sym_nil] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(7),
    [sym__statement] = STATE(8),
    [sym_expression_statement] = STATE(9),
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(11),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [aux_sym_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [2] = {
    [sym__expression] = STATE(15),
    [sym__literal] = STATE(11),
    [sym__map_element] = STATE(16),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(19),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [3] = {
    [sym__expression] = STATE(18),
    [sym__literal] = STATE(11),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_EQ_GT] = ACTIONS(23),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_sigil] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [sym_charlist] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_nil] = ACTIONS(25),
  },
  [5] = {
    [sym__expression] = STATE(21),
    [sym__literal] = STATE(11),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym__keyword_list_entry] = STATE(21),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(27),
    [sym_atom] = ACTIONS(29),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_EQ_GT] = ACTIONS(31),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_sigil] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [sym_atom] = ACTIONS(33),
    [sym_charlist] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [sym_integer] = ACTIONS(33),
    [sym_float] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_nil] = ACTIONS(33),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(35),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym_sigil] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_atom] = ACTIONS(39),
    [sym_charlist] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(39),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_sigil] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_atom] = ACTIONS(43),
    [sym_charlist] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [sym_integer] = ACTIONS(43),
    [sym_float] = ACTIONS(43),
    [sym_true] = ACTIONS(43),
    [sym_false] = ACTIONS(43),
    [sym_nil] = ACTIONS(43),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_sigil] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(45),
    [sym_atom] = ACTIONS(47),
    [sym_charlist] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [sym_integer] = ACTIONS(47),
    [sym_float] = ACTIONS(47),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_nil] = ACTIONS(47),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_EQ_GT] = ACTIONS(49),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_sigil] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [sym_atom] = ACTIONS(51),
    [sym_charlist] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_nil] = ACTIONS(51),
  },
  [12] = {
    [sym__statement] = STATE(22),
    [sym_expression_statement] = STATE(9),
    [sym__expression] = STATE(10),
    [sym__literal] = STATE(11),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_EQ_GT] = ACTIONS(55),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_sigil] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(55),
    [sym_atom] = ACTIONS(57),
    [sym_charlist] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
    [sym_integer] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [sym_true] = ACTIONS(57),
    [sym_false] = ACTIONS(57),
    [sym_nil] = ACTIONS(57),
  },
  [14] = {
    [sym__expression] = STATE(23),
    [sym__literal] = STATE(11),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_EQ_GT] = ACTIONS(23),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [15] = {
    [anon_sym_EQ_GT] = ACTIONS(59),
  },
  [16] = {
    [aux_sym_map_repeat1] = STATE(27),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(63),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_EQ_GT] = ACTIONS(65),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_sigil] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [sym_atom] = ACTIONS(67),
    [sym_charlist] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_integer] = ACTIONS(67),
    [sym_float] = ACTIONS(67),
    [sym_true] = ACTIONS(67),
    [sym_false] = ACTIONS(67),
    [sym_nil] = ACTIONS(67),
  },
  [18] = {
    [aux_sym_tuple_repeat1] = STATE(30),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(71),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_sigil] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [sym_atom] = ACTIONS(75),
    [sym_charlist] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_integer] = ACTIONS(75),
    [sym_float] = ACTIONS(75),
    [sym_true] = ACTIONS(75),
    [sym_false] = ACTIONS(75),
    [sym_nil] = ACTIONS(75),
  },
  [20] = {
    [sym__expression] = STATE(31),
    [sym__literal] = STATE(11),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [21] = {
    [aux_sym_list_repeat1] = STATE(34),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(79),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_sigil] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_atom] = ACTIONS(83),
    [sym_charlist] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [sym_float] = ACTIONS(83),
    [sym_true] = ACTIONS(83),
    [sym_false] = ACTIONS(83),
    [sym_nil] = ACTIONS(83),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
  },
  [24] = {
    [sym__expression] = STATE(35),
    [sym__literal] = STATE(11),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [25] = {
    [sym__expression] = STATE(15),
    [sym__literal] = STATE(11),
    [sym__map_element] = STATE(36),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(19),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [sym_sigil] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [sym_atom] = ACTIONS(89),
    [sym_charlist] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [sym_true] = ACTIONS(89),
    [sym_false] = ACTIONS(89),
    [sym_nil] = ACTIONS(89),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(93),
  },
  [28] = {
    [sym__expression] = STATE(39),
    [sym__literal] = STATE(11),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_EQ_GT] = ACTIONS(95),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [sym_sigil] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [sym_atom] = ACTIONS(97),
    [sym_charlist] = ACTIONS(97),
    [sym_string] = ACTIONS(97),
    [sym_integer] = ACTIONS(97),
    [sym_float] = ACTIONS(97),
    [sym_true] = ACTIONS(97),
    [sym_false] = ACTIONS(97),
    [sym_nil] = ACTIONS(97),
  },
  [30] = {
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(101),
  },
  [31] = {
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
  },
  [32] = {
    [sym__expression] = STATE(42),
    [sym__literal] = STATE(11),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym__keyword_list_entry] = STATE(42),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(29),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_EQ_GT] = ACTIONS(105),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_sigil] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [sym_atom] = ACTIONS(107),
    [sym_charlist] = ACTIONS(107),
    [sym_string] = ACTIONS(107),
    [sym_integer] = ACTIONS(107),
    [sym_float] = ACTIONS(107),
    [sym_true] = ACTIONS(107),
    [sym_false] = ACTIONS(107),
    [sym_nil] = ACTIONS(107),
  },
  [34] = {
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(111),
  },
  [35] = {
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
  },
  [36] = {
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
  },
  [37] = {
    [sym__expression] = STATE(15),
    [sym__literal] = STATE(11),
    [sym__map_element] = STATE(45),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(19),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_EQ_GT] = ACTIONS(117),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_sigil] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [sym_atom] = ACTIONS(119),
    [sym_charlist] = ACTIONS(119),
    [sym_string] = ACTIONS(119),
    [sym_integer] = ACTIONS(119),
    [sym_float] = ACTIONS(119),
    [sym_true] = ACTIONS(119),
    [sym_false] = ACTIONS(119),
    [sym_nil] = ACTIONS(119),
  },
  [39] = {
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
  },
  [40] = {
    [sym__expression] = STATE(46),
    [sym__literal] = STATE(11),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_EQ_GT] = ACTIONS(123),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_sigil] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [sym_atom] = ACTIONS(125),
    [sym_charlist] = ACTIONS(125),
    [sym_string] = ACTIONS(125),
    [sym_integer] = ACTIONS(125),
    [sym_float] = ACTIONS(125),
    [sym_true] = ACTIONS(125),
    [sym_false] = ACTIONS(125),
    [sym_nil] = ACTIONS(125),
  },
  [42] = {
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
  },
  [43] = {
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(11),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym__keyword_list_entry] = STATE(47),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(29),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_EQ_GT] = ACTIONS(129),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [sym_sigil] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_atom] = ACTIONS(131),
    [sym_charlist] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [sym_integer] = ACTIONS(131),
    [sym_float] = ACTIONS(131),
    [sym_true] = ACTIONS(131),
    [sym_false] = ACTIONS(131),
    [sym_nil] = ACTIONS(131),
  },
  [45] = {
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
  },
  [46] = {
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
  },
  [47] = {
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file, 0),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__reserved_literal, 1),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__reserved_literal, 1),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_file_repeat1, 1),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_file_repeat1, 1),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file, 1),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_map, 2),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_map, 2),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 2),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 2),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_file_repeat1, 2),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_file_repeat1, 2),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__map_element, 2),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_map, 3),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_map, 3),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__keyword_list_entry, 2),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__map_element, 3),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_map_repeat1, 2),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_map, 4),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_map, 4),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_repeat1, 2),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_map_repeat1, 3),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_repeat1, 3),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 3),
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
