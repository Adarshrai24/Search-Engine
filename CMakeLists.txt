cmake_minimum_required(VERSION 3.22.1)

project(SearchEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(search_engine
    main.cpp
    src/trie.cpp
    src/parsers.cpp
    src/search.cpp
    src/utils.cpp
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
