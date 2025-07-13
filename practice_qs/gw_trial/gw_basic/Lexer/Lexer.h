
// Lexer.h
#pragma once
#include <vector>
#include <string>

struct Token {
    std::string value;
    std::string type;
};

class Lexer {
public:
    std::vector<Token> tokenize(const std::string& line);
};
