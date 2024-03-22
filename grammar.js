module.exports = grammar({
  name: 'corpus',
  extras: _ => [],
  externals: $ => [$.header_delimiter, $.delimiter],
  rules: {
    source_file: $ => repeat($.test),

    test: $ => seq($.header),

    header: $ =>
      seq(
        $.header_delimiter,
        '\n',
        field('name', $.header_text),
        '\n',
        $.header_delimiter,
        optional('\n'),
      ),
    header_text: _ => /.+/,
  },
});
