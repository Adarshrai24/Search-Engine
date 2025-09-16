#include "search.h"
#include "trie.h"

std::vector<int> searchWord(Trie &trie, const std::string &word) {
    return trie.getOccurrences(word);
}