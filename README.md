# Tree-sitter grammar for tree-sitter test files (corpus files)

Hello!

I created this grammar as a learning exercise and because I wanted to have highlighting when creating tests for tree-sitter grammars. I have a previous version of this using vim regex parsing [here](https://github.com/datwaft/corpus.vim), if you want to see it (it is now archived as this works a lot better).

This grammar is supposed to be usable out of the box so if you have any issues or enhancements feel free to open an [issue](https://github.com/datwaft/tree-sitter-corpus/issues/new/choose) or a [PR](https://github.com/datwaft/tree-sitter-corpus/compare).

## How do I install this grammar?

I may create a PR into the [`nvim-treesitter`](https://github.com/nvim-treesitter/nvim-treesitter) repository in the future but meanwhile you can install it like this (example for [`lazy.nvim`](https://github.com/folke/lazy.nvim)):

```lua
{
  "datwaft/tree-sitter-corpus",
  dependencies = { "nvim-treesitter/nvim-treesitter" },
  build = ":TSUpdate corpus",
}
```

The grammar contains its own queries and configures itself, so you don't need to do anything else.

## Screenshots?

Here are some screenshots (my colorscheme is [catppuccin](https://github.com/catppuccin/nvim), my terminal is [Wezterm](https://wezfurlong.org/wezterm/index.html) and my font is [Iosevka](https://github.com/be5invis/Iosevka)):

![](https://github.com/datwaft/tree-sitter-corpus/assets/37723586/d4a5aee1-6631-48f5-83b2-deb9ecbe3925)

![](https://github.com/datwaft/tree-sitter-corpus/assets/37723586/bd02659f-eb22-4bba-acc8-0348e2e4938b)
