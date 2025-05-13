/*
56. Write a program rtrim right most white spaces.
*/

#include <iostream>
#include<ctype.h>
#include<cstring>
#define MAX 100

using namespace std;


char* rtrim(char*);


int main()
{
	char ch[MAX] = "  remin varghese  ";

	
	rtrim(ch);
	cout << ch << "checkingspaces" << endl;
	

}




char* rtrim(char* ch)
{
	int size = strlen(ch);
	int i = size - 1;   // index of strlen for hello is 5 so 5-1 need to be done for array

	while (i != 0)
	{
		if (ch[i] != ' ')
			break;
		i--;

	}
	if (i == size)   //checks spaces if not found returns
		return ch;
	else
	{
		ch[i + 1] = '\0';  //adds null to the end
		return ch;
	}

}


