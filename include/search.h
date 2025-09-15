#ifndef SEARCH_H
#define SEARCH_H

#include<string>
#include<vector>

class Trie;

std::vector<int> searchWord(const Trie &trie, const std::string &word);

#endif  