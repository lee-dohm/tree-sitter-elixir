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
  anon_sym_PERCENT = 1,
  anon_sym_LBRACE = 2,
  anon_sym_COMMA = 3,
  anon_sym_RBRACE = 4,
  sym_alias = 5,
  anon_sym_EQ_GT = 6,
  anon_sym_PERCENT_LBRACE = 7,
  sym_sigil = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  sym_atom = 11,
  sym_charlist = 12,
  sym_string = 13,
  sym_integer = 14,
  sym_float = 15,
  sym_true = 16,
  sym_false = 17,
  sym_nil = 18,
  sym_file = 19,
  sym__statement = 20,
  sym_expression_statement = 21,
  sym__expression = 22,
  sym__literal = 23,
  sym_struct = 24,
  sym__map_element = 25,
  sym_map = 26,
  sym_tuple = 27,
  sym__keyword_list_entry = 28,
  sym_list = 29,
  sym__reserved_literal = 30,
  aux_sym_file_repeat1 = 31,
  aux_sym_struct_repeat1 = 32,
  aux_sym_tuple_repeat1 = 33,
  aux_sym_list_repeat1 = 34,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [sym_alias] = "alias",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PERCENT_LBRACE] = "%{",
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
  [sym_struct] = "struct",
  [sym__map_element] = "_map_element",
  [sym_map] = "map",
  [sym_tuple] = "tuple",
  [sym__keyword_list_entry] = "_keyword_list_entry",
  [sym_list] = "list",
  [sym__reserved_literal] = "_reserved_literal",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_alias] = {
    .visible = true,
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
  [sym_struct] = {
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
  [aux_sym_struct_repeat1] = {
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
  [2] = {.lex_state = 69},
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
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_alias] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
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
    [sym_file] = STATE(8),
    [sym__statement] = STATE(9),
    [sym_expression_statement] = STATE(10),
    [sym__expression] = STATE(11),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [aux_sym_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [2] = {
    [sym_alias] = ACTIONS(19),
  },
  [3] = {
    [sym__expression] = STATE(16),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(21),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_alias] = ACTIONS(25),
    [anon_sym_EQ_GT] = ACTIONS(23),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(23),
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
    [sym__expression] = STATE(19),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym__map_element] = STATE(20),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(29),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [6] = {
    [sym__expression] = STATE(23),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym__keyword_list_entry] = STATE(23),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(31),
    [sym_atom] = ACTIONS(33),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym_alias] = ACTIONS(37),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(35),
    [sym_sigil] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_atom] = ACTIONS(37),
    [sym_charlist] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [sym_integer] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_alias] = ACTIONS(43),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(41),
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
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(45),
    [sym_alias] = ACTIONS(47),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(45),
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
    [anon_sym_PERCENT] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_alias] = ACTIONS(51),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(49),
    [sym_sigil] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(49),
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
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [sym_alias] = ACTIONS(55),
    [anon_sym_EQ_GT] = ACTIONS(53),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(53),
    [sym_sigil] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym_atom] = ACTIONS(55),
    [sym_charlist] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
    [sym_integer] = ACTIONS(55),
    [sym_float] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_nil] = ACTIONS(55),
  },
  [13] = {
    [sym__statement] = STATE(24),
    [sym_expression_statement] = STATE(10),
    [sym__expression] = STATE(11),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [14] = {
    [anon_sym_LBRACE] = ACTIONS(59),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [sym_alias] = ACTIONS(63),
    [anon_sym_EQ_GT] = ACTIONS(61),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(61),
    [sym_sigil] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [sym_atom] = ACTIONS(63),
    [sym_charlist] = ACTIONS(63),
    [sym_string] = ACTIONS(63),
    [sym_integer] = ACTIONS(63),
    [sym_float] = ACTIONS(63),
    [sym_true] = ACTIONS(63),
    [sym_false] = ACTIONS(63),
    [sym_nil] = ACTIONS(63),
  },
  [16] = {
    [aux_sym_tuple_repeat1] = STATE(28),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(67),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_alias] = ACTIONS(71),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(69),
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
  [18] = {
    [sym__expression] = STATE(29),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [anon_sym_EQ_GT] = ACTIONS(23),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [19] = {
    [anon_sym_EQ_GT] = ACTIONS(73),
  },
  [20] = {
    [aux_sym_struct_repeat1] = STATE(33),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(77),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_alias] = ACTIONS(81),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(79),
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
  [22] = {
    [sym__expression] = STATE(34),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [23] = {
    [aux_sym_list_repeat1] = STATE(37),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(85),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(87),
    [sym_alias] = ACTIONS(89),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(87),
    [sym_sigil] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym_atom] = ACTIONS(89),
    [sym_charlist] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [sym_true] = ACTIONS(89),
    [sym_false] = ACTIONS(89),
    [sym_nil] = ACTIONS(89),
  },
  [25] = {
    [sym__expression] = STATE(19),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym__map_element] = STATE(39),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(91),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(29),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [26] = {
    [sym__expression] = STATE(40),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [sym_alias] = ACTIONS(95),
    [anon_sym_EQ_GT] = ACTIONS(93),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(93),
    [sym_sigil] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [sym_atom] = ACTIONS(95),
    [sym_charlist] = ACTIONS(95),
    [sym_string] = ACTIONS(95),
    [sym_integer] = ACTIONS(95),
    [sym_float] = ACTIONS(95),
    [sym_true] = ACTIONS(95),
    [sym_false] = ACTIONS(95),
    [sym_nil] = ACTIONS(95),
  },
  [28] = {
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(99),
  },
  [29] = {
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
  },
  [30] = {
    [sym__expression] = STATE(43),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [31] = {
    [sym__expression] = STATE(19),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym__map_element] = STATE(44),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(29),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [sym_alias] = ACTIONS(105),
    [anon_sym_EQ_GT] = ACTIONS(103),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(103),
    [sym_sigil] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym_atom] = ACTIONS(105),
    [sym_charlist] = ACTIONS(105),
    [sym_string] = ACTIONS(105),
    [sym_integer] = ACTIONS(105),
    [sym_float] = ACTIONS(105),
    [sym_true] = ACTIONS(105),
    [sym_false] = ACTIONS(105),
    [sym_nil] = ACTIONS(105),
  },
  [33] = {
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(109),
  },
  [34] = {
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
  },
  [35] = {
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym__keyword_list_entry] = STATE(47),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(33),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [sym_alias] = ACTIONS(115),
    [anon_sym_EQ_GT] = ACTIONS(113),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(113),
    [sym_sigil] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_atom] = ACTIONS(115),
    [sym_charlist] = ACTIONS(115),
    [sym_string] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [sym_float] = ACTIONS(115),
    [sym_true] = ACTIONS(115),
    [sym_false] = ACTIONS(115),
    [sym_nil] = ACTIONS(115),
  },
  [37] = {
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(119),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_PERCENT] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [sym_alias] = ACTIONS(123),
    [anon_sym_EQ_GT] = ACTIONS(121),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(121),
    [sym_sigil] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [sym_atom] = ACTIONS(123),
    [sym_charlist] = ACTIONS(123),
    [sym_string] = ACTIONS(123),
    [sym_integer] = ACTIONS(123),
    [sym_float] = ACTIONS(123),
    [sym_true] = ACTIONS(123),
    [sym_false] = ACTIONS(123),
    [sym_nil] = ACTIONS(123),
  },
  [39] = {
    [aux_sym_struct_repeat1] = STATE(51),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(125),
  },
  [40] = {
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
  },
  [41] = {
    [sym__expression] = STATE(52),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(11),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [sym_alias] = ACTIONS(131),
    [anon_sym_EQ_GT] = ACTIONS(129),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(129),
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
  [43] = {
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
  },
  [44] = {
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
  },
  [45] = {
    [sym__expression] = STATE(19),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym__map_element] = STATE(53),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(29),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym_alias] = ACTIONS(139),
    [anon_sym_EQ_GT] = ACTIONS(137),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(137),
    [sym_sigil] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_atom] = ACTIONS(139),
    [sym_charlist] = ACTIONS(139),
    [sym_string] = ACTIONS(139),
    [sym_integer] = ACTIONS(139),
    [sym_float] = ACTIONS(139),
    [sym_true] = ACTIONS(139),
    [sym_false] = ACTIONS(139),
    [sym_nil] = ACTIONS(139),
  },
  [47] = {
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
  },
  [48] = {
    [sym__expression] = STATE(54),
    [sym__literal] = STATE(12),
    [sym_struct] = STATE(4),
    [sym_map] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym__keyword_list_entry] = STATE(54),
    [sym_list] = STATE(4),
    [sym__reserved_literal] = STATE(12),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_alias] = ACTIONS(11),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(13),
    [sym_sigil] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_atom] = ACTIONS(33),
    [sym_charlist] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(17),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym_alias] = ACTIONS(145),
    [anon_sym_EQ_GT] = ACTIONS(143),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(143),
    [sym_sigil] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [sym_atom] = ACTIONS(145),
    [sym_charlist] = ACTIONS(145),
    [sym_string] = ACTIONS(145),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(145),
    [sym_true] = ACTIONS(145),
    [sym_false] = ACTIONS(145),
    [sym_nil] = ACTIONS(145),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [sym_alias] = ACTIONS(149),
    [anon_sym_EQ_GT] = ACTIONS(147),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(147),
    [sym_sigil] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym_atom] = ACTIONS(149),
    [sym_charlist] = ACTIONS(149),
    [sym_string] = ACTIONS(149),
    [sym_integer] = ACTIONS(149),
    [sym_float] = ACTIONS(149),
    [sym_true] = ACTIONS(149),
    [sym_false] = ACTIONS(149),
    [sym_nil] = ACTIONS(149),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(151),
  },
  [52] = {
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
  },
  [53] = {
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(155),
  },
  [54] = {
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [sym_alias] = ACTIONS(161),
    [anon_sym_EQ_GT] = ACTIONS(159),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(159),
    [sym_sigil] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [sym_atom] = ACTIONS(161),
    [sym_charlist] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
    [sym_integer] = ACTIONS(161),
    [sym_float] = ACTIONS(161),
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
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
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
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 2),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 2),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_map, 2),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_map, 2),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_file_repeat1, 2),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_file_repeat1, 2),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__map_element, 2),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_map, 3),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_map, 3),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__keyword_list_entry, 2),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct, 4),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct, 4),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_repeat1, 2),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__map_element, 3),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_repeat1, 2),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_map, 4),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_map, 4),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct, 5),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct, 5),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_repeat1, 3),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_repeat1, 3),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 3),
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
