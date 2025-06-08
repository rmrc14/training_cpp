#ifndef CPU_H
#define CPU_H

#include <iostream>
#include <unordered_map>
#include <vector>
#include <iomanip>
#include<string>

class CPU {
private:
    std::unordered_map<std::string, uint16_t> registers;
    std::vector<uint16_t> memory; // 65,536 locations 65*1024

    uint16_t mask16(uint32_t val) {   //convert value to 16 bit
        return static_cast<uint16_t>(val & 0xFFFF);  // & is bit wise opertion
    }

public:
    CPU() : memory(65536, 0) {
        // Initialize registers with zero
        registers["AX"] = 0; // key -- value  
        registers["BX"] = 0; // AX  -- 0
        registers["CX"] = 0;
        registers["DX"] = 0;
    }

    uint16_t getRegister(const std::string& reg) {
        if (registers.find(reg) == registers.end())
            throw std::runtime_error("Invalid register: " + reg);
        return registers[reg];
    }

    void setRegister(const std::string& reg, uint16_t val) {
        if (registers.find(reg) == registers.end())
            throw std::runtime_error("Invalid register: " + reg);
        registers[reg] = mask16(val);
    }

    uint16_t getMemory(uint16_t addr) {
        if (addr >= memory.size())
            throw std::runtime_error("Memory access out of range: " + std::to_string(addr));
        return memory[addr];
    }

    void setMemory(uint16_t addr, uint16_t val) {
        if (addr >= memory.size())
            throw std::runtime_error("Memory access out of range: " + std::to_string(addr));
        memory[addr] = mask16(val);
    }

    void printState() {
        std::cout << "Received Interrupt\n";
    
        std::cout << "AX: " << " (" << std::dec << registers["AX"] << ")\n";
   
        std::cout << "BX: " << " (" << std::dec << registers["BX"] << ")\n";

        std::cout << "CX: " << " (" << std::dec << registers["CX"] << ")\n";
       
        std::cout << "DX: " << " (" << std::dec << registers["DX"] << ")\n";

        std::cout << "First 16 bit Memory\n";
        for (int i = 0; i < 16; ++i) {
            std::cout << std::dec << std::setw(2) << std::setfill('0') << i << " -> " << memory[i] << "\n";
        }
    }
};

#endif
