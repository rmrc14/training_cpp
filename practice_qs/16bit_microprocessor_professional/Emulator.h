#ifndef EMULATOR_H
#define EMULATOR_H

#include "CPU.h"
#include "Parser.h"

#include <fstream>
#include <iostream>
#include <vector>
#include <cctype>
#include <stdexcept>

class Emulator {
private:
    CPU cpu;
    std::vector<Instruction> program;
    size_t pc = 0;

    // Helper to parse memory address from operand like "[3]"
    bool isMemory(const std::string& op) {
        return !op.empty() && op.front() == '[' && op.back() == ']';
    }

    uint16_t parseMemoryAddress(const std::string& op) {
        std::string addrStr = op.substr(1, op.size() - 2);
        int addr = std::stoi(addrStr);
        if (addr < 0 || addr >= 65536)
            throw std::runtime_error("Memory address out of range: " + addrStr);
        return static_cast<uint16_t>(addr);
    }

    // Parse immediate value or register/memory
    uint16_t getValue(const std::string& operand) {
        if (operand.empty()) throw std::runtime_error("Empty operand");

        if (isMemory(operand)) {
            uint16_t addr = parseMemoryAddress(operand);
            return cpu.getMemory(addr);
        }

        // Check if operand is register
        if (operand == "AX" || operand == "BX" || operand == "CX" || operand == "DX") {
            return cpu.getRegister(operand);
        }

        // Otherwise immediate number
        return static_cast<uint16_t>(std::stoi(operand));
    }

    // Assign value to register or memory
    void setValue(const std::string& operand, uint16_t val) {
        if (isMemory(operand)) {
            uint16_t addr = parseMemoryAddress(operand);
            cpu.setMemory(addr, val);
        }
        else if (operand == "AX" || operand == "BX" || operand == "CX" || operand == "DX") {
            cpu.setRegister(operand, val);
        }
        else {
            throw std::runtime_error("Invalid destination operand: " + operand);
        }
    }

    void execute(const Instruction& instr) {
        std::string op = instr.opcode;

        if (op == "MOV") {
            uint16_t val = getValue(instr.operand2);
            setValue(instr.operand1, val);
        }
        else if (op == "ADD") {
            uint16_t destVal = getValue(instr.operand1);
            uint16_t srcVal = getValue(instr.operand2);

            uint32_t res = destVal + srcVal;
            if (res > 0xFFFF) {
                std::cout << "Warning: ADD overflow, result truncated to 16 bits.\n";
            }
            setValue(instr.operand1, static_cast<uint16_t>(res & 0xFFFF));
        }
        else if (op == "SUB") {
            uint16_t destVal = getValue(instr.operand1);
            uint16_t srcVal = getValue(instr.operand2);

            int32_t res = static_cast<int32_t>(destVal) - static_cast<int32_t>(srcVal);
            if (res < 0) {
                std::cout << "Warning: SUB underflow, result wrapped as unsigned 16-bit.\n";
                res = (res + 0x10000) & 0xFFFF;
            }
            setValue(instr.operand1, static_cast<uint16_t>(res));
        }
        else if (op == "MUL") {
            uint16_t destVal = getValue(instr.operand1);
            uint16_t srcVal = getValue(instr.operand2);

            uint32_t res = static_cast<uint32_t>(destVal) * static_cast<uint32_t>(srcVal);
            if (res > 0xFFFF) {
                std::cout << "Warning: MUL overflow, result truncated to 16 bits.\n";
            }
            setValue(instr.operand1, static_cast<uint16_t>(res & 0xFFFF));
        }
        else if (op == "DIV") {
            uint16_t destVal = getValue(instr.operand1);
            uint16_t srcVal = getValue(instr.operand2);

            if (srcVal == 0) {
                std::cout << "Error: Division by zero. Result set to 0.\n";
                setValue(instr.operand1, 0);
            }
            else {
                uint16_t res = destVal / srcVal;
                setValue(instr.operand1, res);
            }
        }
        else if (op == "HLT") {
            // Halt: do nothing here, run loop will detect and stop.
        }
        else {
            throw std::runtime_error("Unknown instruction: " + op);
        }
    }

public:
    void loadProgram(const std::string& filename) {
        std::ifstream infile(filename);
        if (!infile.is_open())
            throw std::runtime_error("Failed to open file: " + filename);

        std::string line;
        while (getline(infile, line)) {
            if (line.empty()) continue;
            Instruction instr = Parser::parse(line);
            program.push_back(instr);
        }
        infile.close();
    }

    void run() {
        pc = 0;
        while (pc < program.size()) {
            Instruction& instr = program[pc];
            try {
                if (instr.opcode == "HLT") {
                    break;
                }
                execute(instr);
            }
            catch (const std::exception& ex) {
                std::cerr << "Runtime error at instruction " << pc << ": " << ex.what() << "\n";
                break;
            }
            ++pc;
        }
        cpu.printState();
    }
};

#endif
