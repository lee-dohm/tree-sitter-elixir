// In Elixir, any sequence of digits within a number can have underscores but must begin and end
// with a digit
const
  binaryDigit = /[01]/,
  digit = /\d/,
  hexDigit = /[\da-fA-F]/,
  octalDigit = /[0-7]/,

  digits = seq(
    repeat(digit),
    repeat(
      seq(
        '_',
        repeat(digit)
      )
    )
  ),
  binaryDigits = seq(
    repeat(binaryDigit),
    repeat(
      seq(
        '_',
        repeat(binaryDigit)
      )
    )
  ),
  octalDigits = seq(
    repeat(octalDigit),
    repeat(
      seq(
        '_',
        repeat(octalDigit)
      )
    )
  ),
  hexDigits = seq(
    repeat(hexDigit),
    repeat(
      seq(
        '_',
        repeat(hexDigit)
      )
    )
  ),

  decimalLiteral = digits,
  binaryLiteral = seq(choice('0b', '0B'), binaryDigits),
  octalLiteral = seq(choice('0o', '0O'), octalDigits),
  hexLiteral = seq(choice('0x', '0X'), hexDigits)

function separated1 (sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function separated (sep, rule) {
  return optional(separated1(sep, rule))
}

function commaSep1 (rule) {
  return separated1(',', rule)
}

function commaSep (rule) {
  return separated(',', rule)
}

function dotSep1 (rule) {
  return separated1('.', rule)
}

function dotSep (rule) {
  return separated('.', rule)
}

module.exports = grammar({
  name: 'elixir',

  rules: {
    file: $ => repeat($._statement),

    _statement: $ => choice(
      $.expression_statement
    ),

    expression_statement: $ => choice(
      $._expression,
    ),

    _expression: $ => choice(
      $._literal,
      $._reserved_literal
    ),

    _literal: $ => choice(
      $.alias,
      $.atom,
      $.charlist,
      $.float,
      $.integer,
      $.list,
      $.map,
      $.sigil,
      $.string,
      $.struct,
      $.tuple
    ),

    alias: $ => {
      const aliasStart = /[A-Z]/
      const aliasContinue = /[a-zA-Z0-9_]/
      const segment = seq(aliasStart, repeat(aliasContinue))

      return token(dotSep1(segment))
    },

    atom: $ => {
      const atomStart = /[a-zA-Z_]/
      const atomContinue = /[a-zA-Z0-9_]/
      const atomEnding = /[?!]/
      const colonBefore = seq(':', atomStart, repeat(atomContinue), optional(atomEnding))
      const colonAfter = seq(atomStart, repeat(atomContinue), optional(atomEnding), ':')

      return token(choice(colonBefore, colonAfter))
    },

    charlist: $ => token(
      choice(
        seq("'", repeat(choice(/[^\\'\n]/, /\\(.|\n)/)), "'"),
        seq("'''", repeat(/.|\n/), "'''")
      )
    ),

    float: $ => token(
      seq(
        digits,
        '.',
        digits,
        optional(
          seq(
            choice('e', 'E'),
            optional(choice('-', '+')),
            digits
          )
        )
      )
    ),

    integer: $ => token(
      choice(
        decimalLiteral,
        binaryLiteral,
        octalLiteral,
        hexLiteral
      )
    ),

    _keyword_list_entry: $ => seq($.atom, $._expression),

    list: $ => seq(
      '[',
      commaSep(choice($._keyword_list_entry, $._expression)),
      ']'
    ),

    _map_element: $ => choice(
      seq($._expression, '=>', $._expression),
      seq($.atom, $._expression)
    ),

    map: $ => seq(
      '%{',
      commaSep($._map_element),
      '}'
    ),

    sigil: $ => token(
        seq(
        '~',
        /[a-zA-Z]/,
        choice(
          seq('(', repeat(/[^)]/), ')'),
          seq('{', repeat(/[^}]/), '}'),
          seq('[', repeat(/[^\]]/), ']'),
          seq('<', repeat(/[^>]/), '>'),
          seq('"', repeat(/[^"]/), '"'),
          seq("'", repeat(/[^']/), "'"),
          seq('|', repeat(/[^|]/), '|'),
          seq('/', repeat(/[^\/]/), '/')
        ),
        repeat(/[a-zA-Z]/)
      )
    ),

    string: $ => {
      const contents = choice(/[^\\"\n]/, /\\(.|\n)/)
      const multilineContents = repeat(/.|\n/)

      return token(
        choice(
          seq(
            '"',
            repeat(
              choice(
                repeat(contents)
              )
            ),
            '"'
          ),
          seq(
            '"""',
            multilineContents,
            '"""'
          )
        )
      )
    },

    struct: $ => seq('%', $.alias, '{', commaSep($._map_element), '}'),

    tuple: $ => seq(
      '{',
      commaSep($._expression),
      '}'
    ),

    _reserved_literal: $ => choice(
      $.true,
      $.false,
      $.nil
    ),

    true: $ => 'true',
    false: $ => 'false',
    nil: $ => 'nil'
  }
})
