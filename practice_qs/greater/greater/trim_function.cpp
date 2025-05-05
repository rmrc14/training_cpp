#include <iostream>
#include<ctype.h>
#define MAX 100

using namespace std;

char* ltrim(char*);
char* rtrim(char*);
char* trim(char*);

int main()
{
	char ch[MAX] = "  remin varghese  ";
	
	//cout << ch<<endl;
	//cout << "enter the ch:" << endl;
	//fgets(ch,MAX,stdin);
	
	
	//ltrim(ch);
	//cout << ch<<endl;
	rtrim(ch);
	cout << ch<<"checkingspaces";
	trim(ch);
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
	int i = size-1;

	while (i!=0)
	{
		if (ch[i] != ' ')
			break;
		i--;

	}
	if (i == size)
		return ch;
	else
	{
		ch[i+1 ] = '\0';
		return ch;
	}

}


char* trim(char*)
{



}