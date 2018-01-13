#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 56
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_alias = 1,
  sym_atom = 2,
  sym_charlist = 3,
  sym_float = 4,
  sym_integer = 5,
  anon_sym_LBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACK = 8,
  anon_sym_EQ_GT = 9,
  anon_sym_PERCENT_LBRACE = 10,
  anon_sym_RBRACE = 11,
  sym_sigil = 12,
  sym_string = 13,
  anon_sym_PERCENT = 14,
  anon_sym_LBRACE = 15,
  sym_true = 16,
  sym_false = 17,
  sym_nil = 18,
  sym_file = 19,
  sym__statement = 20,
  sym_expression_statement = 21,
  sym__expression = 22,
  sym__literal = 23,
  sym__keyword_list_entry = 24,
  sym_list = 25,
  sym__map_element = 26,
  sym_map = 27,
  sym_struct = 28,
  sym_tuple = 29,
  sym__reserved_literal = 30,
  aux_sym_file_repeat1 = 31,
  aux_sym_list_repeat1 = 32,
  aux_sym_map_repeat1 = 33,
  aux_sym_tuple_repeat1 = 34,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_alias] = "alias",
  [sym_atom] = "atom",
  [sym_charlist] = "charlist",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_RBRACE] = "}",
  [sym_sigil] = "sigil",
  [sym_string] = "string",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LBRACE] = "{",
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
  [sym__map_element] = "_map_element",
  [sym_map] = "map",
  [sym_struct] = "struct",
  [sym_tuple] = "tuple",
  [sym__reserved_literal] = "_reserved_literal",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_alias] = {
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
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LBRACE] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
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
  [sym__map_element] = {
    .visible = false,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
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
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
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
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(66);
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
      ACCEPT_TOKEN(anon_sym_PERCENT);
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
    case 66:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(67);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '?')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(66);
      END_STATE();
    case 67:
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(69);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(68);
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
  [5] = {.lex_state = 69},
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
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_alias] = ACTIONS(3),
    [sym_atom] = ACTIONS(3),
    [sym_charlist] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_sigil] = ACTIONS(3),
    [sym_string] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_true] = ACTIONS(3),
    [sym_false] = ACTIONS(3),
    [sym_nil] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(8),
    [sym__statement] = STATE(9),
    [sym_expression_statement] = STATE(10),
    [sym__expression] = STATE(11),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [aux_sym_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_alias] = ACTIONS(21),
    [sym_atom] = ACTIONS(21),
    [sym_charlist] = ACTIONS(21),
    [sym_float] = ACTIONS(21),
    [sym_integer] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_EQ_GT] = ACTIONS(19),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [sym_sigil] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_nil] = ACTIONS(21),
  },
  [3] = {
    [sym__expression] = STATE(16),
    [sym__literal] = STATE(12),
    [sym__keyword_list_entry] = STATE(16),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(23),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [4] = {
    [sym__expression] = STATE(19),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym__map_element] = STATE(20),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(27),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [5] = {
    [sym_alias] = ACTIONS(31),
  },
  [6] = {
    [sym__expression] = STATE(23),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(33),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_alias] = ACTIONS(37),
    [sym_atom] = ACTIONS(37),
    [sym_charlist] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [sym_integer] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym_sigil] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_alias] = ACTIONS(43),
    [sym_atom] = ACTIONS(43),
    [sym_charlist] = ACTIONS(43),
    [sym_float] = ACTIONS(43),
    [sym_integer] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(41),
    [sym_sigil] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_true] = ACTIONS(43),
    [sym_false] = ACTIONS(43),
    [sym_nil] = ACTIONS(43),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_alias] = ACTIONS(47),
    [sym_atom] = ACTIONS(47),
    [sym_charlist] = ACTIONS(47),
    [sym_float] = ACTIONS(47),
    [sym_integer] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(45),
    [sym_sigil] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_nil] = ACTIONS(47),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_alias] = ACTIONS(51),
    [sym_atom] = ACTIONS(51),
    [sym_charlist] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(49),
    [sym_sigil] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
    [anon_sym_PERCENT] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_nil] = ACTIONS(51),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_alias] = ACTIONS(55),
    [sym_atom] = ACTIONS(55),
    [sym_charlist] = ACTIONS(55),
    [sym_float] = ACTIONS(55),
    [sym_integer] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_EQ_GT] = ACTIONS(53),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [sym_sigil] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_nil] = ACTIONS(55),
  },
  [13] = {
    [sym__statement] = STATE(24),
    [sym_expression_statement] = STATE(10),
    [sym__expression] = STATE(11),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [14] = {
    [sym__expression] = STATE(25),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_alias] = ACTIONS(61),
    [sym_atom] = ACTIONS(61),
    [sym_charlist] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [sym_sigil] = ACTIONS(61),
    [sym_string] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [sym_nil] = ACTIONS(61),
  },
  [16] = {
    [aux_sym_list_repeat1] = STATE(28),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(65),
  },
  [17] = {
    [sym__expression] = STATE(29),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_EQ_GT] = ACTIONS(19),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_alias] = ACTIONS(69),
    [sym_atom] = ACTIONS(69),
    [sym_charlist] = ACTIONS(69),
    [sym_float] = ACTIONS(69),
    [sym_integer] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_EQ_GT] = ACTIONS(67),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [sym_sigil] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_true] = ACTIONS(69),
    [sym_false] = ACTIONS(69),
    [sym_nil] = ACTIONS(69),
  },
  [19] = {
    [anon_sym_EQ_GT] = ACTIONS(71),
  },
  [20] = {
    [aux_sym_map_repeat1] = STATE(33),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [21] = {
    [anon_sym_LBRACE] = ACTIONS(77),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_alias] = ACTIONS(81),
    [sym_atom] = ACTIONS(81),
    [sym_charlist] = ACTIONS(81),
    [sym_float] = ACTIONS(81),
    [sym_integer] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_sigil] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_true] = ACTIONS(81),
    [sym_false] = ACTIONS(81),
    [sym_nil] = ACTIONS(81),
  },
  [23] = {
    [aux_sym_tuple_repeat1] = STATE(37),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(85),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_alias] = ACTIONS(89),
    [sym_atom] = ACTIONS(89),
    [sym_charlist] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(87),
    [sym_sigil] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(87),
    [sym_true] = ACTIONS(89),
    [sym_false] = ACTIONS(89),
    [sym_nil] = ACTIONS(89),
  },
  [25] = {
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
  },
  [26] = {
    [sym__expression] = STATE(38),
    [sym__literal] = STATE(12),
    [sym__keyword_list_entry] = STATE(38),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(23),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_alias] = ACTIONS(95),
    [sym_atom] = ACTIONS(95),
    [sym_charlist] = ACTIONS(95),
    [sym_float] = ACTIONS(95),
    [sym_integer] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_EQ_GT] = ACTIONS(93),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [sym_sigil] = ACTIONS(95),
    [sym_string] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym_true] = ACTIONS(95),
    [sym_false] = ACTIONS(95),
    [sym_nil] = ACTIONS(95),
  },
  [28] = {
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(99),
  },
  [29] = {
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
  },
  [30] = {
    [sym__expression] = STATE(41),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [31] = {
    [sym__expression] = STATE(19),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym__map_element] = STATE(42),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(27),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_alias] = ACTIONS(105),
    [sym_atom] = ACTIONS(105),
    [sym_charlist] = ACTIONS(105),
    [sym_float] = ACTIONS(105),
    [sym_integer] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_EQ_GT] = ACTIONS(103),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [sym_sigil] = ACTIONS(105),
    [sym_string] = ACTIONS(105),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(103),
    [sym_true] = ACTIONS(105),
    [sym_false] = ACTIONS(105),
    [sym_nil] = ACTIONS(105),
  },
  [33] = {
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(109),
  },
  [34] = {
    [sym__expression] = STATE(19),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym__map_element] = STATE(46),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(27),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [35] = {
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_alias] = ACTIONS(115),
    [sym_atom] = ACTIONS(115),
    [sym_charlist] = ACTIONS(115),
    [sym_float] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_EQ_GT] = ACTIONS(113),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [sym_sigil] = ACTIONS(115),
    [sym_string] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_true] = ACTIONS(115),
    [sym_false] = ACTIONS(115),
    [sym_nil] = ACTIONS(115),
  },
  [37] = {
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(119),
  },
  [38] = {
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
  },
  [39] = {
    [sym__expression] = STATE(50),
    [sym__literal] = STATE(12),
    [sym__keyword_list_entry] = STATE(50),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(23),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_alias] = ACTIONS(125),
    [sym_atom] = ACTIONS(125),
    [sym_charlist] = ACTIONS(125),
    [sym_float] = ACTIONS(125),
    [sym_integer] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_EQ_GT] = ACTIONS(123),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [sym_sigil] = ACTIONS(125),
    [sym_string] = ACTIONS(125),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_true] = ACTIONS(125),
    [sym_false] = ACTIONS(125),
    [sym_nil] = ACTIONS(125),
  },
  [41] = {
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
  },
  [42] = {
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
  },
  [43] = {
    [sym__expression] = STATE(19),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym__map_element] = STATE(51),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(27),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_alias] = ACTIONS(133),
    [sym_atom] = ACTIONS(133),
    [sym_charlist] = ACTIONS(133),
    [sym_float] = ACTIONS(133),
    [sym_integer] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_EQ_GT] = ACTIONS(131),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_sigil] = ACTIONS(133),
    [sym_string] = ACTIONS(133),
    [anon_sym_PERCENT] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_true] = ACTIONS(133),
    [sym_false] = ACTIONS(133),
    [sym_nil] = ACTIONS(133),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_alias] = ACTIONS(137),
    [sym_atom] = ACTIONS(137),
    [sym_charlist] = ACTIONS(137),
    [sym_float] = ACTIONS(137),
    [sym_integer] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_EQ_GT] = ACTIONS(135),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [sym_sigil] = ACTIONS(137),
    [sym_string] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(135),
    [sym_true] = ACTIONS(137),
    [sym_false] = ACTIONS(137),
    [sym_nil] = ACTIONS(137),
  },
  [46] = {
    [aux_sym_map_repeat1] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(139),
  },
  [47] = {
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
  },
  [48] = {
    [sym__expression] = STATE(54),
    [sym__literal] = STATE(12),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym__reserved_literal] = STATE(12),
    [sym_alias] = ACTIONS(7),
    [sym_atom] = ACTIONS(7),
    [sym_charlist] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_integer] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [sym_sigil] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_alias] = ACTIONS(145),
    [sym_atom] = ACTIONS(145),
    [sym_charlist] = ACTIONS(145),
    [sym_float] = ACTIONS(145),
    [sym_integer] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_EQ_GT] = ACTIONS(143),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym_sigil] = ACTIONS(145),
    [sym_string] = ACTIONS(145),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(143),
    [sym_true] = ACTIONS(145),
    [sym_false] = ACTIONS(145),
    [sym_nil] = ACTIONS(145),
  },
  [50] = {
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_alias] = ACTIONS(153),
    [sym_atom] = ACTIONS(153),
    [sym_charlist] = ACTIONS(153),
    [sym_float] = ACTIONS(153),
    [sym_integer] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [sym_sigil] = ACTIONS(153),
    [sym_string] = ACTIONS(153),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(151),
    [sym_true] = ACTIONS(153),
    [sym_false] = ACTIONS(153),
    [sym_nil] = ACTIONS(153),
  },
  [53] = {
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(155),
  },
  [54] = {
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_alias] = ACTIONS(161),
    [sym_atom] = ACTIONS(161),
    [sym_charlist] = ACTIONS(161),
    [sym_float] = ACTIONS(161),
    [sym_integer] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_EQ_GT] = ACTIONS(159),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [sym_sigil] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(159),
    [sym_true] = ACTIONS(161),
    [sym_false] = ACTIONS(161),
    [sym_nil] = ACTIONS(161),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file, 0),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__reserved_literal, 1),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__reserved_literal, 1),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_file_repeat1, 1),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_file_repeat1, 1),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file, 1),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_map, 2),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_map, 2),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 2),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 2),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_file_repeat1, 2),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_file_repeat1, 2),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__keyword_list_entry, 2),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__map_element, 2),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_map, 3),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_map, 3),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__map_element, 3),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_map_repeat1, 2),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_map, 4),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_map, 4),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct, 4),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct, 4),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_repeat1, 2),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 3),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_map_repeat1, 3),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct, 5),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct, 5),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_repeat1, 3),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct, 6),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct, 6),
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
