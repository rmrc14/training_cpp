/*
58. Write a program trim both ends white spaces.
*/

#include <iostream>
#include<ctype.h>
#include<cstring>
#define MAX 100

using namespace std;

char* ltrim(char*);
char* rtrim(char*);
char* trim(char*);

int main()
{
	char ch[MAX] = "  remin varghese  ";

	
	trim(ch);
	cout << ch << "checkingspaces";

	return 0;

}

char* ltrim(char* ch)
{
	//int size = strlen(ch);
	int i = 0;
	while (ch[i])
	{
		if (ch[i] != ' ')
			break;
		i++;

	}
	if (i == 0)
		return ch;
	int j = 0;
	while (ch[j])
	{
		ch[j] = ch[j + i];
		j++;
	}
	return ch;
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


char* trim(char* ch)
{
	rtrim(ch);
	ltrim(ch);

	return ch;


}