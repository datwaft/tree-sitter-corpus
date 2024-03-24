module.exports = grammar({
  name: 'corpus',
  extras: _ => ['\r'],
  externals: $ => [$.header_delimiter, $.delimiter],
  rules: {
    source_file: $ => repeat($.test_block),

    test_block: $ =>
      seq(
        repeat('\n'),
        $.header,
        $.code,
        $.delimiter,
        optional('\n'),
        $.syntax_tree,
      ),
    header: $ =>
      seq(
        $.header_delimiter,
        '\n',
        $.header_text,
        repeat1('\n'),
        repeat(seq($.attribute, '\n')),
        $.header_delimiter,
        optional('\n'),
      ),
    header_text: _ => /.+/,
    attribute: $ =>
      choice(
        ':skip',
        ':error',
        ':fail-fast',
        seq(':language', '(', alias(/[^)]*/, $.language), ')'),
        seq(':platform', '(', alias(/[^)]*/, $.platform), ')'),
      ),

    code: $ => repeat1(seq(/[^\n]*/, '\n')),

    syntax_tree: $ => repeat1(seq(/[^\n]*/, '\n')),
  },
});
