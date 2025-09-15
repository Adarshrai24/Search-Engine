#ifndef TRIE_H
#define TRIE_H

#include<string>
#include<vector>
#include<map>   

class TrieNode {
public:
    std::map<char, TrieNode*> children;
    bool isEnd = false;
    std::vector<int>lineNumbers;
    TrieNode() = default;
    ~TrieNode() = default;
};

class Trie {
private:
    TrieNode* root;

public: 
    Trie();
    ~Trie();
    
    void insert(const std::string &word, int lineNum);
    std::vector<int>getOccurences(const std::string &word);
};

#endif