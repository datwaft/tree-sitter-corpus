((syntax_tree) @injection.content
 (#set! injection.language "query"))

(test_block
  (header
    (attribute
      (language) @injection.language))
  (code) @injection.content)
