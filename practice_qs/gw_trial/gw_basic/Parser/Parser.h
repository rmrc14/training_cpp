
// Parser.h
#pragma once
#include <vector>
#include "Utils/ASTNode.h"

class Parser {
public:
    ASTNode* parse(const std::vector<Token>& tokens);
};
