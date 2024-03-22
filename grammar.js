module.exports = grammar({
  name: 'corpus',
  extras: _ => [],
  rules: {
    source_file: $ => repeat($.test),

    test: $ =>
      seq(
        $.header,
        $.input_source_code,
        $.delimiter,
        // '\n',
        // $.expected_output_syntax_tree,
      ),

    header: $ =>
      seq(
        $.header_delimiter,
        '\n',
        field('name', $.header_text),
        '\n',
        $.header_delimiter,
        optional('\n'),
      ),
    header_delimiter: _ => token(seq(repeat1('='), repeat(/\S/))),
    header_text: _ => /.+/,

    input_source_code: _ => token(prec(-1, /(.|\n)*/)),

    delimiter: _ => token(seq(repeat1('-'), repeat(/\S/))),

    expected_output_syntax_tree: _ => token(prec(-1, /(.|\n)*/)),
  },
});
