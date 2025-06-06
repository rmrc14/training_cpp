#pragma once
#include<fstream>
#include<iostream>
#include<sstream>
#include<exception>
#include<cstdlib>

#include "Microprocessor.h"

//using namespace std;

enum commandArith
{
	MUL,
	ADD,
	SUB,
	DIV
};

enum Register
{
	AX,
	BX,
	CX,
	DX

};

void cmdFunctionCall(commandArith c, Microprocessor& m, int a, int b)
{
	switch (c)
	{

		case MUL:  m.MUL(a, b);
		case ADD:  m.ADD(a, b);
		case SUB:  m.SUB(a, b);
		case DIV:  m.DIV(a, b);

	}

}


int* registerTostring(Register r, Microprocessor& m)
{

	switch (r)
	{
		case AX: return m.getAX();
		case BX: return m.getBX();
		case CX: return m.getCX();
		case DX: return m.getDX();

	}

}



class InstrFile
{
	ifstream file;

public:
	InstrFile(const string& filename)  // open file
	{
		try
		{
			file.open(filename, ios::in);
			if (file.is_open())
				cout << "not able to " << endl;
		}
		catch (exception& e)
		{
			cerr << "exception: " << e.what() << endl;
		}

	}
	~InstrFile() //close file
	{
		if (file.is_open())
		{
			file.close();
		}

	}
	void parsingCmd(const string& filename);
	void callingMicroProc(string );
};

void InstrFile::parsingCmd(const string& filename)
{
	int programCounter = 0;
	Microprocessor m;

	string cmd, addr1, addr2, token;

	stringstream iss(filename);

	while (iss >> cmd)
	{
		programCounter++;
		getline(iss, addr1);


		// here parsing the commands 
		if (addr1.find("[") == 0 || addr1.find('A') == 0 || addr1.find('B') == 0 || addr1.find('C') == 0 || addr1.find('D') == 0)
		{
			//strtok(null,',');
			addr1 = addr1.find_first_not_of("[");

			addr2 = addr1.find_first_not_of(", /t");




		}
		 /*
		   need to parse the value get the value
		   using getters 
		 
		 
		 */


		callingMicroProc( cmd );
	}

}

void InstrFile::callingMicroProc(string cmd)
{
	// here calling each command function in microprocessor
	if (cmd == "MOV")
	{


	}
	else if (cmd == "MUL")
	{


	}
	else if (cmd == "ADD")
	{



	}
	else if (cmd == "SUB")
	{

	}
	else if (cmd == "DIV")
	{

	}
	else if (cmd == "HLT")
	{

	}
	else
	{
		cout << "unkown command passed " << endl;
	}
}