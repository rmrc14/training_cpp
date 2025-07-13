// StatementExecutor.cpp
#include "StatementExecutor.h"
#include <iostream>

void StatementExecutor::execute(ASTNode* root) {
    std::cout << "Executing AST node: " << (root ? root->nodeType : "null") << "\n";
}
