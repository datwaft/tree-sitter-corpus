((syntax_tree) @injection.content
 (#set! injection.language "query"))

((test_block
  (header
    (attribute
      (language) @_lang))
  (code) @injection.content)
 (#set-lang-from-info-string! @_lang))
