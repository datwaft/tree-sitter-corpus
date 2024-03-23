module.exports = grammar({
  name: 'corpus',
  extras: _ => ['\r'],
  externals: $ => [$.header_delimiter, $.delimiter],
  rules: {
    source_file: $ => repeat($.test_block),

    test_block: $ => seq($.header, $.code, $.delimiter, '\n', $.syntax_tree),
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
    attribute: _ => seq(':', /\S+/),

    code: $ => repeat1(seq(/[^\n]*/, '\n')),

    syntax_tree: $ => repeat1(seq(/[^\n]*/, '\n')),
  },
});
