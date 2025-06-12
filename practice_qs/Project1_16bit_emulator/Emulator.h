#pragma once

#include "cpu.h"
#include "Parser.h"

#include<vector>
#include<fstream>


class Emulator
{
private:
	size_t pc;//program counter
	CPU cpu;
	std::vector<Instructions> program;
	bool isValidMemory();
	void setValue(Instructions& inst);
	void getValue(const std::string& operand);
	void execute(Instructions&);
	uint16_t parseMemoryAddress(const std::string& op);
public:
	void loadProgram(const std::string filename);
	void run();

};

// --------------------  parse memeory address--------------

uint16_t parseMemoryAddress(const std::string& op)
{
	std::string addrstr = op.substr(1, op.size() - 2); // [] brackets are excluded
	if (operand)

}




// --------------- get and set values -------------------
void setValue(Instructions & inst)
{

}
void getValue(const std::string & operand )
{

}

//----------------------- Execute ---------------------

void Emulator::execute(Instructions& inst)
{
	std::string op = inst.opcode;

	if (op == "MOV")
	{
		

	}
	else if (op == "MUL")
	{

	}
	else if (op == "DIV")
	{

	}
	else if (op == "SUB")
	{

	}
	else
	{

	}

}






//  -------------  here loads program and the parses and stores in a program vector
void Emulator::loadProgram(const std::string filename)
{
	std::ifstream fin(filename);
	if (!fin.is_open())
		throw std::runtime_error("unable to open the file " + filename);

	std::string line;
	while (std::getline(fin, line))
	{
		if (line.empty()) continue;
		Instructions instr = Parse::parseCommand(line);
		program.push_back(instr);
	}
	fin.close();
 }

//--------------------- run-----------------

void Emulator::run()
{
	pc = 0;
	while (pc < program.size())
	{
		Instructions inst = program[pc];
		try
		{
			if (inst.opcode == "HLT") break;
			execute(instr);
		}
		catch (const std::exception& e)
		{
			std::cerr << "runtime exception at " << pc << e.what() << std::endl;
			break;
		}
		pc++;
	}
	cpu.memoryDump();
}