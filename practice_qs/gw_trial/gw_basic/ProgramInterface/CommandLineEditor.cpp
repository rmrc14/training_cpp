// CommandLineEditor.cpp
#include "CommandLineEditor.h"
#include <iostream>

std::string CommandLineEditor::getInput() {
    std::string line;
    std::getline(std::cin, line);
    return line;
}
