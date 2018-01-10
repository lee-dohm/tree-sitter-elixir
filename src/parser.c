#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 23
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_sigil = 1,
  anon_sym_LBRACK = 2,
  anon_sym_COMMA = 3,
  anon_sym_RBRACK = 4,
  sym_atom = 5,
  sym_charlist = 6,
  sym_string = 7,
  sym_integer = 8,
  sym_float = 9,
  sym_true = 10,
  sym_false = 11,
  sym_nil = 12,
  sym_file = 13,
  sym__statement = 14,
  sym_expression_statement = 15,
  sym__expression = 16,
  sym__literal = 17,
  sym__keyword_list_entry = 18,
  sym_list = 19,
  sym__reserved_literal = 20,
  aux_sym_file_repeat1 = 21,
  aux_sym_list_repeat1 = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_sigil] = "sigil",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
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
  [sym__keyword_list_entry] = "_keyword_list_entry",
  [sym_list] = "list",
  [sym__reserved_literal] = "_reserved_literal",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
      if (lookahead == '~')
        ADVANCE(49);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == '\"')
        ADVANCE(51);
      if (lookahead == '\'')
        ADVANCE(53);
      if (lookahead == '(')
        ADVANCE(54);
      if (lookahead == '/')
        ADVANCE(55);
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '{')
        ADVANCE(58);
      if (lookahead == '|')
        ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == '\"')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_sigil);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '\'')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == ')')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '/')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '>')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == ']')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '|')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(59);
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
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_sigil] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_file] = STATE(5),
    [sym__statement] = STATE(6),
    [sym_expression_statement] = STATE(7),
    [sym__expression] = STATE(8),
    [sym__literal] = STATE(9),
    [sym_list] = STATE(2),
    [sym__reserved_literal] = STATE(9),
    [aux_sym_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_sigil] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_nil] = ACTIONS(11),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_sigil] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(15),
    [sym_charlist] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
  },
  [3] = {
    [sym__expression] = STATE(13),
    [sym__literal] = STATE(9),
    [sym__keyword_list_entry] = STATE(13),
    [sym_list] = STATE(2),
    [sym__reserved_literal] = STATE(9),
    [sym_sigil] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(17),
    [sym_atom] = ACTIONS(19),
    [sym_charlist] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_nil] = ACTIONS(11),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_sigil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [sym_atom] = ACTIONS(23),
    [sym_charlist] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [sym_integer] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_nil] = ACTIONS(23),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_sigil] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_atom] = ACTIONS(29),
    [sym_charlist] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_integer] = ACTIONS(29),
    [sym_float] = ACTIONS(29),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
    [sym_nil] = ACTIONS(29),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(31),
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
    [sym_sigil] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
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
    [sym__statement] = STATE(14),
    [sym_expression_statement] = STATE(7),
    [sym__expression] = STATE(8),
    [sym__literal] = STATE(9),
    [sym_list] = STATE(2),
    [sym__reserved_literal] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_sigil] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_nil] = ACTIONS(11),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_sigil] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [sym_atom] = ACTIONS(47),
    [sym_charlist] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [sym_integer] = ACTIONS(47),
    [sym_float] = ACTIONS(47),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_nil] = ACTIONS(47),
  },
  [12] = {
    [sym__expression] = STATE(15),
    [sym__literal] = STATE(9),
    [sym_list] = STATE(2),
    [sym__reserved_literal] = STATE(9),
    [sym_sigil] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_nil] = ACTIONS(11),
  },
  [13] = {
    [aux_sym_list_repeat1] = STATE(18),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(51),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_sigil] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_atom] = ACTIONS(55),
    [sym_charlist] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
    [sym_integer] = ACTIONS(55),
    [sym_float] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_nil] = ACTIONS(55),
  },
  [15] = {
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
  },
  [16] = {
    [sym__expression] = STATE(19),
    [sym__literal] = STATE(9),
    [sym__keyword_list_entry] = STATE(19),
    [sym_list] = STATE(2),
    [sym__reserved_literal] = STATE(9),
    [sym_sigil] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_atom] = ACTIONS(19),
    [sym_charlist] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_nil] = ACTIONS(11),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_sigil] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
    [sym_atom] = ACTIONS(61),
    [sym_charlist] = ACTIONS(61),
    [sym_string] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [sym_nil] = ACTIONS(61),
  },
  [18] = {
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(65),
  },
  [19] = {
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
  },
  [20] = {
    [sym__expression] = STATE(22),
    [sym__literal] = STATE(9),
    [sym__keyword_list_entry] = STATE(22),
    [sym_list] = STATE(2),
    [sym__reserved_literal] = STATE(9),
    [sym_sigil] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_atom] = ACTIONS(19),
    [sym_charlist] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_nil] = ACTIONS(11),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_sigil] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
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
  [22] = {
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file, 0),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__reserved_literal, 1),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__reserved_literal, 1),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_file_repeat1, 1),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_file_repeat1, 1),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file, 1),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_file_repeat1, 2),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_file_repeat1, 2),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__keyword_list_entry, 2),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 3),
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
