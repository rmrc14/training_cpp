#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <sstream>
#include <algorithm>

struct Instruction {
    std::string opcode;
    std::string operand1;
    std::string operand2;
};

class Parser {
public:
    static Instruction parse(const std::string& line) {
        Instruction instr;
        std::string cleaned = line;

        // Remove comments or trailing spaces (optional)
        cleaned.erase(std::remove(cleaned.begin(), cleaned.end(), '\r'), cleaned.end());
        cleaned.erase(std::remove(cleaned.begin(), cleaned.end(), '\n'), cleaned.end());

        // Convert to uppercase for opcode uniformity
        std::string upperLine;
        for (char c : cleaned) upperLine += toupper(c);

        std::istringstream iss(cleaned);
        iss >> instr.opcode;

        // Extract operands (if any)
        std::string rest;
        getline(iss, rest);
        rest.erase(0, rest.find_first_not_of(" \t"));

        // Split operands by comma
        size_t commaPos = rest.find(',');
        if (commaPos != std::string::npos) {
            instr.operand1 = rest.substr(0, commaPos);
            instr.operand2 = rest.substr(commaPos + 1);

            // Trim spaces
            instr.operand1.erase(instr.operand1.find_last_not_of(" \t") + 1);
            instr.operand2.erase(0, instr.operand2.find_first_not_of(" \t"));
        }
        else {
            instr.operand1 = rest;
        }

        return instr;
    }
};

#endif
