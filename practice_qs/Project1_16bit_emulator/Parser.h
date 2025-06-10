#pragma once
#include<string>
#include<sstream>


struct Instructions
{
	std::string opcode;
	std::string operand1;
	std::string operand2;

};

class Parse
{
	public:
	static Instructions parseCommand(const std::string& line);  // no need to create an object

};

Instructions Parse::parseCommand(const std::string& line)
{
	Instructions instr;
	std::istringstream iss(line);

	iss >> instr.opcode;

	// rest after the opcode
	std::string rest;
	getline(iss, rest);
	// remove whitespaces from index 0 to find the first character
	rest.erase(0, rest.find_first_not_of(" \t"));

	// split operands by comma
	auto first = rest.find(',');
	if(first!=std::string::npos)
	{
		
		instr.operand1 = rest.substr(0, first);
		instr.operand2 = rest.substr(first + 1);  // here from comma + 1 i.e "[" onwards

		// delete trailing white spaces
		instr.operand1.erase(instr.operand1.find_last_not_of(" \t")+1);
		instr.operand2.erase(0,instr.operand2.find_first_not_of(" \t"));
	}

	return instr;

 }