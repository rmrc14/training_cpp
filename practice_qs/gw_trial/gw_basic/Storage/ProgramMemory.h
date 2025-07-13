// ProgramMemory.h
#pragma once
#include <map>

class ProgramMemory {
    std::map<int, std::string> lines;
public:
    void insertLine(int line, const std::string& code);
    void printAll();
};

