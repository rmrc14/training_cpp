#pragma once
#include<unordered_map>
#include<iostream>
#include<string>
#include<iomanip>


class CPU
{
	std::unordered_map < std::string, uint16_t > registers;
	std::vector<uint16_t> memory;

	uint16_t mask(uint32_t val)
	{
		return static_cast<uint16_t>(val & 0XFFFF);
	}

public:
	CPU():memory(64*1024,0)     // 64*1024
	{
		registers["AX"] = 0;
		registers["BX"] = 0;
		registers["CX"] = 0;
		registers["DX"] = 0;
	}

	

	uint16_t getRegisters(const std::string&);
	void setRegisters(const std::string& , uint16_t val);

	uint16_t getMemory(uint16_t addr);
	void setMemory(uint16_t addr, uint16_t val);

	void memoryDump();

};

void CPU::memoryDump()
{
	std::cout << "received interrupt:\n ";
	std::cout << "AX: " << std::dec << registers["AX"] << std::endl;
	std::cout << "BX: " << std::dec << registers["BX"] << std::endl;
	std::cout << "CX: " << std::dec << registers["CX"] << std::endl;
	std::cout << "DX: " << std::dec << registers["DX"] << std::endl;

	std::cout << " memory :" << std::endl;
	for(int i=0;i<16;i++)
	{
		std::cout << std::setfill('0') << std::setw(2) <<i <<" => " << memory[i] << std::endl;


	}


}
//------------------memory -----------------------

uint16_t CPU::getMemory(uint16_t addr)
{
	if (addr >= memory.size())
		throw std::runtime_error("memory access out of range " + std::to_string(addr));
	return memory[addr];

}
void CPU::setMemory(uint16_t addr, uint16_t val)
{
	if (addr == memory.size())
		throw std::runtime_error("memory access out of bounds " + std::to_string(addr));
	memory[addr] = mask(val);

}


// ----------------- registers -------------------
uint16_t CPU::getRegisters(const std::string& reg)
{
	if (registers.find(reg) == registers.end())
		throw std::runtime_error("invalid registers " + reg);
	return registers[reg];
}
void CPU::setRegisters(const std::string& reg, uint16_t val)
{
	if (registers.find(reg) == registers.end())
		throw std::runtime_error("invalid registers " + reg);
	registers[reg] = mask(val);
}