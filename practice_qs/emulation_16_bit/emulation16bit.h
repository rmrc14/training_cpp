#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <iomanip>
#include <stdexcept>

class Emulator16Bit {
    std::unordered_map<std::string, uint16_t> registers;
    std::vector<uint16_t> memory;

public:
    Emulator16Bit() : memory(65536, 0) {
        registers["AX"] = 0;
        registers["BX"] = 0;
        registers["CX"] = 0;
        registers["DX"] = 0;
    }

    void execute(const std::string& filename) {
        std::ifstream file(filename);
        std::string line;

        while (std::getline(file, line)) {
            line = trim(line);
            if (line.empty()) continue;

            std::istringstream iss(line);
            std::string opcode;
            iss >> opcode;

            if (opcode == "MOV") {
                std::string dest, src;
                getline(iss, dest, ',');
                getline(iss, src);
                executeMOV(trim(dest), trim(src));
            }
            else if (opcode == "ADD" || opcode == "SUB" || opcode == "MUL" || opcode == "DIV") {
                std::string r1, r2;
                getline(iss, r1, ',');
                getline(iss, r2);
                executeArithmetic(opcode, trim(r1), trim(r2));
            }
            else if (opcode == "HLT") {
                std::cout << "Received Interrupt\n";
                break;
            }
        }

        printState();
    }

private:
    void executeMOV(const std::string& dest, const std::string& src) {
        if (isMemory(dest)) {
            int addr = getMemoryAddress(dest);
            memory[addr] = isRegister(src) ? registers[src] : std::stoi(src);
        }
        else if (isRegister(dest)) {
            if (isMemory(src)) {
                int addr = getMemoryAddress(src);
                registers[dest] = memory[addr];
            }
            else if (isRegister(src)) {
                registers[dest] = registers[src];
            }
            else {
                registers[dest] = std::stoi(src);
            }
        }
    }

    void executeArithmetic(const std::string& op, const std::string& r1, const std::string& r2) {
        if (!isRegister(r1) || !isRegister(r2)) return;

        uint32_t result = 0;
        if (op == "ADD") {
            result = static_cast<uint32_t>(registers[r1]) + registers[r2];
            registers[r1] = static_cast<uint16_t>(result & 0xFFFF);
        }
        else if (op == "SUB") {
            result = static_cast<uint32_t>(registers[r1]) - registers[r2];
            registers[r1] = static_cast<uint16_t>(result & 0xFFFF);
        }
        else if (op == "MUL") {
            result = static_cast<uint32_t>(registers[r1]) * registers[r2];
            registers[r1] = static_cast<uint16_t>(result & 0xFFFF);
        }
        else if (op == "DIV") {
            if (registers[r2] == 0) {
                std::cerr << "Error: Division by zero\n";
                registers[r1] = 0;
            }
            else {
                result = static_cast<uint32_t>(registers[r1]) / registers[r2];
                registers[r1] = static_cast<uint16_t>(result & 0xFFFF);
            }
        }

        // Optional: overflow detection
        if (result > 0xFFFF) {
            std::cerr << "[Warning] Overflow occurred in " << op << ": result = " << result << "\n";
        }
    }

    void printState() {
        // Register state
        for (const auto& reg : { "AX", "BX", "CX", "DX" }) {
            uint16_t value = registers[reg];
            std::cout << reg << ": 0x"
                << std::hex << std::setw(4) << std::setfill('0') << value
                << " (" << std::dec << value << ")\n";
        }

        // First 16 memory cells
        std::cout << "First 16 bit Memory\n";
        for (int i = 0; i < 16; ++i) {
            std::cout << std::setw(2) << std::setfill('0') << i
                << " -> " << memory[i] << "\n";
        }
    }


    bool isRegister(const std::string& s) {
        return registers.find(s) != registers.end();
    }

    bool isMemory(const std::string& s) {
        return s.front() == '[' && s.back() == ']';
    }

    int getMemoryAddress(const std::string& mem) {
        return std::stoi(mem.substr(1, mem.size() - 2));
    }

    std::string trim(const std::string& str) {
        const char* ws = " \t\n\r\f\v";
        size_t start = str.find_first_not_of(ws);
        size_t end = str.find_last_not_of(ws);
        return (start == std::string::npos) ? "" : str.substr(start, end - start + 1);
    }
};
