if vim.b.corpus_loaded then
	return
end
vim.b.corpus_loaded = true

local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.corpus = {
	install_info = {
		url = "https://github.com/datwaft/tree-sitter-corpus",
		files = { "src/parser.c", "src/scanner.c" },
		branch = "main",
		generate_requires_npm = false,
		requires_generate_from_grammar = false,
	},
	filetype = "corpus",
}
vim.filetype.add({ pattern = { [".*/test/corpus/.*"] = "corpus" } })
