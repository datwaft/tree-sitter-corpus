module.exports = grammar({
  name: 'corpus',
  extras: _ => ['\r'],
  externals: $ => [$.header_delimiter, $.delimiter],
  rules: {
    source_file: $ => repeat($.test),

    test: $ =>
      seq(
        $.header_delimiter,
        '\n',
        $.header_text,
        '\n',
        $.header_delimiter,
        '\n',
        $.code,
        $.delimiter,
        '\n',
        $.syntax_tree,
      ),
    header_text: _ => /.+/,

    code: $ => repeat1(seq(/[^\n]*/, '\n')),

    syntax_tree: $ => repeat1(seq(/[^\n]*/, '\n')),
  },
});
