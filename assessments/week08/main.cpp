
// emulate 16 bit microprocessor


#include<iostream>
#include<iomanip>
#include<list>
#include<math.h>
#include "FileParsing.h"

using namespace std;


int main()
{
	InstrFile f("instructions.h");

	Microprocessor M1;
	M1.displayHlt();
	return 0;
}
