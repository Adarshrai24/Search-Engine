#include "utils.h"

#include<iostream>
#include<algorithm>
#include<cctype>

std::string trim(const std::string &s) {
    size_t start = s.find_first_not_of(" \t\n\r");
    if (start == std::string::npos) 
        return "";
        
    size_t end = s.find_last_not_of(" \t\n\r");
    return s.substr(start, end-start+1);
}


std::string toLower(const std::string &s) {
    std::string result = s;
    for (char c : s) 
        tolower(c);
    
    return result;    
}

void printVector(const std::vector<int> &v) {
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << v[i];
        if (i + 1 == v.size())
            std::cout << ", ";    
    }
    std::cout << std::endl;
}