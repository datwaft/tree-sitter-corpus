package tree_sitter_corpus_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-corpus"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_corpus.Language())
	if language == nil {
		t.Errorf("Error loading Corpus grammar")
	}
}
