#include <iostream>
#include <cstring>
#include"string_handling.h"


using namespace std;


void string_handling()
{
	char ch = 'A';
	char fName[20]; //Array of characters size is fixed
	string sName; //string dynamically grows the size of the string


	cout << "ch value " << ch << endl;
	cout << "enter the first name: ";
	cin >> fName;
	cout << "enter second name : ";
	cin >> sName;
	cout << "\n my name is " <<fName <<" " << sName << endl;
	// \r is carriage return which returns the carriage to the beginning of the line and overrides the content already present
	
	char name[] = "hello";
	cout << sizeof(name)<<endl;
	cout << "string length of the name is : " << strlen(name)<<endl;
	//cout << strlength(sName);

	for (int i = 0;i <= strlen(name);i++ )
		printf("%c =%d \n", name[i], name[i]);



}

void enumhandling()

{
	enum day{ monday, tuesday=2000, wednesday };
	day today = wednesday;
	cout << "value of today: " << today << endl;

}