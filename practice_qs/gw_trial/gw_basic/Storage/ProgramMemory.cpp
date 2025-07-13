// ProgramMemory.cpp
#include "ProgramMemory.h"
#include <iostream>

void ProgramMemory::insertLine(int line, const std::string& code) {
    lines[line] = code;
    std::cout << "Inserted line " << line << ": " << code << "\n";
}

void ProgramMemory::printAll() {
    for (auto& [line, code] : lines)
        std::cout << line << " " << code << "\n";
}
