#ifndef PARSER_H
#define PARSER_H

#include<string>
#include<vector>

class Trie; 

std::vector<std::string> splitWords(const std::string &line);
void parseFile(const std::string &fileName, Trie &trie);

#endif