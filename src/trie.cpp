#include "trie.h"

Trie::Trie() {
    root = new TrieNode();
}

void Trie::insert(const std::string &word, int lineNumber) {
    TrieNode *node = root;
    for (char c : word) {
        if (!node->children.count(c))
            node->children[c] = new TrieNode();

        node = node->children[c];
    }
    node->isEnd = true;
    node->lineNumbers.push_back(lineNumber);
}

bool Trie::search(const std::string &word) {
    const TrieNode *node = root;
    for (char c : word) {
        if (!node->children.count(c))
            return false;

        node = node->children.at(c);
    }
    return node->isEnd;
}

std::vector<int> Trie::getOccurrences(const std::string &word) {
    TrieNode *node = root;
    for (char c : word) {
        if (!node->children.count(c))
            return {};

        node = node->children.at(c);
    }

    if (node->isEnd)
        return node->lineNumbers;

    return {};
}
