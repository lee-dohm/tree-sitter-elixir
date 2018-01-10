#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 33
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  sym_sigil = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_atom = 7,
  sym_charlist = 8,
  sym_string = 9,
  sym_integer = 10,
  sym_float = 11,
  sym_true = 12,
  sym_false = 13,
  sym_nil = 14,
  sym_file = 15,
  sym__statement = 16,
  sym_expression_statement = 17,
  sym__expression = 18,
  sym__literal = 19,
  sym_tuple = 20,
  sym__keyword_list_entry = 21,
  sym_list = 22,
  sym__reserved_literal = 23,
  aux_sym_file_repeat1 = 24,
  aux_sym_tuple_repeat1 = 25,
  aux_sym_list_repeat1 = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
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
  [sym_tuple] = "tuple",
  [sym__keyword_list_entry] = "_keyword_list_entry",
  [sym_list] = "list",
  [sym__reserved_literal] = "_reserved_literal",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
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
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '0')
        ADVANCE(24);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '[')
        ADVANCE(32);
      if (lookahead == ']')
        ADVANCE(33);
      if (lookahead == '_')
        ADVANCE(34);
      if (lookahead == 'f')
        ADVANCE(37);
      if (lookahead == 'n')
        ADVANCE(42);
      if (lookahead == 't')
        ADVANCE(45);
      if (lookahead == '{')
        ADVANCE(49);
      if (lookahead == '}')
        ADVANCE(50);
      if (lookahead == '~')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(22);
      if (lookahead == '_')
        ADVANCE(21);
      if (lookahead == 'e')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(23);
      if (lookahead == '_')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'X')
        ADVANCE(27);
      if (lookahead == '_')
        ADVANCE(28);
      if (lookahead == 'b')
        ADVANCE(25);
      if (lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'x')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(25);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '_')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 29:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == '_')
        ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == ':')
        ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == 'l')
        ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == 's')
        ADVANCE(40);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == 'e')
        ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == 'i')
        ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == 'l')
        ADVANCE(44);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == 'r')
        ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == 'u')
        ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == 'e')
        ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '\"')
        ADVANCE(53);
      if (lookahead == '\'')
        ADVANCE(55);
      if (lookahead == '(')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '{')
        ADVANCE(60);
      if (lookahead == '|')
        ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == '\"')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_sigil);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '\'')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == ')')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '/')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '|')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(61);
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
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_file] = STATE(6),
    [sym__statement] = STATE(7),
    [sym_expression_statement] = STATE(8),
    [sym__expression] = STATE(9),
    [sym__literal] = STATE(10),
    [sym_tuple] = STATE(3),
    [sym_list] = STATE(3),
    [sym__reserved_literal] = STATE(10),
    [aux_sym_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_sigil] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_atom] = ACTIONS(9),
    [sym_charlist] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_nil] = ACTIONS(13),
  },
  [2] = {
    [sym__expression] = STATE(13),
    [sym__literal] = STATE(10),
    [sym_tuple] = STATE(3),
    [sym_list] = STATE(3),
    [sym__reserved_literal] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(15),
    [sym_sigil] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_atom] = ACTIONS(9),
    [sym_charlist] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_nil] = ACTIONS(13),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(17),
    [sym_sigil] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(17),
    [sym_atom] = ACTIONS(19),
    [sym_charlist] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [sym_true] = ACTIONS(19),
    [sym_false] = ACTIONS(19),
    [sym_nil] = ACTIONS(19),
  },
  [4] = {
    [sym__expression] = STATE(16),
    [sym__literal] = STATE(10),
    [sym_tuple] = STATE(3),
    [sym__keyword_list_entry] = STATE(16),
    [sym_list] = STATE(3),
    [sym__reserved_literal] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_sigil] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(21),
    [sym_atom] = ACTIONS(23),
    [sym_charlist] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_nil] = ACTIONS(13),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [sym_sigil] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym_atom] = ACTIONS(27),
    [sym_charlist] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_nil] = ACTIONS(27),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_sigil] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_atom] = ACTIONS(33),
    [sym_charlist] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [sym_integer] = ACTIONS(33),
    [sym_float] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_nil] = ACTIONS(33),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_sigil] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_atom] = ACTIONS(37),
    [sym_charlist] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [sym_integer] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
    [sym_sigil] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_atom] = ACTIONS(41),
    [sym_charlist] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
    [sym_integer] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [sym_true] = ACTIONS(41),
    [sym_false] = ACTIONS(41),
    [sym_nil] = ACTIONS(41),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [sym_sigil] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [sym_atom] = ACTIONS(45),
    [sym_charlist] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(45),
    [sym_true] = ACTIONS(45),
    [sym_false] = ACTIONS(45),
    [sym_nil] = ACTIONS(45),
  },
  [11] = {
    [sym__statement] = STATE(17),
    [sym_expression_statement] = STATE(8),
    [sym__expression] = STATE(9),
    [sym__literal] = STATE(10),
    [sym_tuple] = STATE(3),
    [sym_list] = STATE(3),
    [sym__reserved_literal] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_sigil] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_atom] = ACTIONS(9),
    [sym_charlist] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_nil] = ACTIONS(13),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
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
  [13] = {
    [aux_sym_tuple_repeat1] = STATE(20),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(55),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_sigil] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [sym_atom] = ACTIONS(59),
    [sym_charlist] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [sym_true] = ACTIONS(59),
    [sym_false] = ACTIONS(59),
    [sym_nil] = ACTIONS(59),
  },
  [15] = {
    [sym__expression] = STATE(21),
    [sym__literal] = STATE(10),
    [sym_tuple] = STATE(3),
    [sym_list] = STATE(3),
    [sym__reserved_literal] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(17),
    [sym_sigil] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(17),
    [sym_atom] = ACTIONS(9),
    [sym_charlist] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_nil] = ACTIONS(13),
  },
  [16] = {
    [aux_sym_list_repeat1] = STATE(24),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(63),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_sigil] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(65),
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
    [sym__expression] = STATE(25),
    [sym__literal] = STATE(10),
    [sym_tuple] = STATE(3),
    [sym_list] = STATE(3),
    [sym__reserved_literal] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_sigil] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_atom] = ACTIONS(9),
    [sym_charlist] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_nil] = ACTIONS(13),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_sigil] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [sym_atom] = ACTIONS(71),
    [sym_charlist] = ACTIONS(71),
    [sym_string] = ACTIONS(71),
    [sym_integer] = ACTIONS(71),
    [sym_float] = ACTIONS(71),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [sym_nil] = ACTIONS(71),
  },
  [20] = {
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [21] = {
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
  },
  [22] = {
    [sym__expression] = STATE(28),
    [sym__literal] = STATE(10),
    [sym_tuple] = STATE(3),
    [sym__keyword_list_entry] = STATE(28),
    [sym_list] = STATE(3),
    [sym__reserved_literal] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_sigil] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_atom] = ACTIONS(23),
    [sym_charlist] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_nil] = ACTIONS(13),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_sigil] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym_atom] = ACTIONS(81),
    [sym_charlist] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [sym_integer] = ACTIONS(81),
    [sym_float] = ACTIONS(81),
    [sym_true] = ACTIONS(81),
    [sym_false] = ACTIONS(81),
    [sym_nil] = ACTIONS(81),
  },
  [24] = {
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(85),
  },
  [25] = {
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
  },
  [26] = {
    [sym__expression] = STATE(31),
    [sym__literal] = STATE(10),
    [sym_tuple] = STATE(3),
    [sym_list] = STATE(3),
    [sym__reserved_literal] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_sigil] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_atom] = ACTIONS(9),
    [sym_charlist] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_nil] = ACTIONS(13),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_sigil] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [sym_atom] = ACTIONS(91),
    [sym_charlist] = ACTIONS(91),
    [sym_string] = ACTIONS(91),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(91),
    [sym_true] = ACTIONS(91),
    [sym_false] = ACTIONS(91),
    [sym_nil] = ACTIONS(91),
  },
  [28] = {
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
  },
  [29] = {
    [sym__expression] = STATE(32),
    [sym__literal] = STATE(10),
    [sym_tuple] = STATE(3),
    [sym__keyword_list_entry] = STATE(32),
    [sym_list] = STATE(3),
    [sym__reserved_literal] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_sigil] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_atom] = ACTIONS(23),
    [sym_charlist] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_nil] = ACTIONS(13),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
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
  [31] = {
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
  },
  [32] = {
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file, 0),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__reserved_literal, 1),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__reserved_literal, 1),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_file_repeat1, 1),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_file_repeat1, 1),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file, 1),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 2),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 2),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_file_repeat1, 2),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_file_repeat1, 2),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__keyword_list_entry, 2),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_repeat1, 2),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_repeat1, 3),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 3),
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
