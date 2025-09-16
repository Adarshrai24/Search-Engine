#include<iostream>
#include<string>
#include<unistd.h>

#include "trie.h"
#include "parser.h"
#include "search.h"
#include "utils.h"

int main() {
    Trie trie;

    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    std::cout << "Current working directory: " << cwd << std::endl;
    const std::string fileName = "data/file1.txt";
    parseFile(fileName, trie);

    while (true) {
        std::string query;
        std::cout << "\nEnter word to search (or 'exit' to quit): ";
        std::getline(std::cin, query);
        
        if (query == "exit") 
            break;

        query = toLower(trim(query));

        std::vector<int> lines = searchWord(trie, query);

        if (lines.empty()) {
            std::cout << "Word ' " << query << " ' not found in the file.\n";
        } else {
            std:: cout << "Word ' " << query << " ' found at lines: ";
            printVector(lines);
        }   
    }
}