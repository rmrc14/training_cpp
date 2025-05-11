/*
57. Write a program ltrim left most white spaces.
*/

#include <iostream>
#include<ctype.h>
#define MAX 100

using namespace std;

char* ltrim(char*);

int main()
{
	char ch[MAX] = "  remin varghese  ";

	


	ltrim(ch);
	cout << ch<<endl;
	

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


