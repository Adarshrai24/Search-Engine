#include "search.h"
#include "trie.h"

std::vector<int> searchWord(const Trie &trie, const std::string &word) {
    return trie.getOccurences(word);
}