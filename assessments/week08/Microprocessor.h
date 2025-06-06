#pragma once
#include<iostream>
#include<iomanip>
using namespace std;


class Microprocessor
{
	int* AX;
	int* BX;
	int* CX;
	int* DX;
	int* mem;

public:

	~Microprocessor(){}
	Microprocessor();
	int MUL(int a, int b);
	int ADD(int a, int b);
	int SUB(int a, int b);
	int DIV(int a, int b);

	void MOV(int* , int* );  
	void MOV(int* , int );

	void displayHlt();

	int* convertToBinary(int val);

	//int convertBintodecimal();

	int (*fptr)(int,int) = nullptr;  // this is to point to all arithematic operation

	
	// -------  getters-------------
	int* getAX()
	{
		return AX;
	}
	int* getBX()
	{
		return BX;
	}
	int* getCX()
	{
		return CX;
	}
	int* getDX()
	{
		return DX;
	}
	int* getMem()
	{
		return mem;
	}
	// --------------------setters------------
	void setAX(int val)
	{

		AX = convertToBinary(val);
	}
	void setBX(int val)
	{
		BX = convertToBinary(val);
	}
	void setCX(int val)
	{
		CX = convertToBinary(val);
	}
	void setDX(int val)
	{
		DX = convertToBinary(val);
	}
	void setMem(int val)  //not done
	{
		
	}
};



Microprocessor::Microprocessor()
{
	AX = new int[16];
	BX = new int[16];
	CX = new int[16];
	DX = new int[16];
	mem = new int[16 * 4];

}



// --------------------------- val to binary -------------------

int* Microprocessor::convertToBinary(int n)
{
	int binary[16] = { 0 };  // 16 -bit integers
	int i = 0;
	int* tmp = new int[16];   // store to return tmp ptr

	if (n == 0)    // if zero direct return
	{
		return tmp=binary;
	}

	while (n > 0)
	{
		binary[i++] = n % 2; //stores in array
		n = n / 2;
	}
	cout << endl << "decimal to binary: ";
	// print in reverse order
	for (int j = 15, i = 0; j >= 0; j--, i++)   // reverse direction of array and store it
		tmp[i] = binary[j];
	for (int i = 0;i < 16;i++)
		cout << tmp[i];


	return tmp;
}



//------------------------    arithematic operation -------------

int Microprocessor::MUL(int a, int b) { return a * b; }
int Microprocessor::ADD(int a, int b) { return a + b; }
int Microprocessor::SUB(int a, int b) { return a - b; }

int Microprocessor::DIV(int a, int b)
{
	if (a > b)
		return a / b;
	else
		return 0;
}

// ------------------- move -----------------


void Microprocessor::MOV(int* a, int* b)  //{// swap(a, b);}  this is  address to address
{
	int* tmp = nullptr;
	tmp = a;
	a = b;
	b = tmp;

}


void Microprocessor::MOV(int* a, int b)   // value to address
{
	*a = b;   // stores the value in ptr a 
}



//----------------- halt ------------------------


void Microprocessor::displayHlt()  // done
{
	cout << "Received Interrupt " << endl;
	cout << "AX: " << AX << endl;
	cout << "BX: " << BX << endl;
	cout << "CX: " << CX << endl;
	cout << "DX: " << DX << endl;

	cout << "First 16 bit Memory" << endl;
	for (int i = 0;i < 16;i++)
	{
		cout << setfill('0') << setw(2) << i << " -> " << mem[i] << endl;
	}



}