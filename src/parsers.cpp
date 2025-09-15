#include "parser.h"
#include "trie.h"

#include <fstream>
#include <cctype>
#include <algorithm>

std::vector<std::string> splitWords(const std::string &line) {
    std::vector<std::string> words;
    std::string word;

    for (char c : line) {
        if (std::isalpha(c)) {
            word += std::tolower(c); 
        } else {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        }
    }

    if(!word.empty()) 
        words.push_back(word);
    
        
    return words;
}

void parseFile(const std::string &fileName, Trie &trie) {
    std::ifstream file(fileName);
    if (!file.is_open()) 
        throw std::runtime_error("Failed to open file: " + fileName);

    std::string line;
    int lineNum = 1;
    while (std::getline(file, line)) {
        std::vector<std::string> words = splitWords(line);

        for (auto &w : words) 
            trie.insert(w, lineNum);

        lineNum++;
    }

    file.close();
}