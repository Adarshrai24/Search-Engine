#ifndef TRIE_H
#define TRIE_H

#include <string>
#include <map>
#include <vector>

struct TrieNode {
    bool isEnd;
    std::map<char, TrieNode*> children;
    std::vector<int> lineNumbers;

    TrieNode() : isEnd(false) {}  
};

class Trie {
private:
    TrieNode* root;

public:
    Trie();
    void insert(const std::string& word, int lineNumber);
    bool search(const std::string& word);
    std::vector<int> getOccurrences(const std::string& word);
};

#endif
