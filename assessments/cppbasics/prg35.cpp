/*
35.Write a Program to Print the Given String in Reverse Order
*/


#include<iostream>
#include<cstring>
#define MAX 100

void revstring(char[],int);


using namespace std;
int main()
{
	char c[MAX];

	cin.getline(c, 99);

	int s = strlen(c);
	
	revstring(c,s);

	return 0;
}
void revstring(char ch[], int size)
{
	int tmp;
	int i = 0,j= size - 1;
	while (i<j)
	{
		tmp = ch[i];
		ch[i++] = ch[j];
		ch[j--] = tmp;
		
	}
	cout << "reversed string :" << ch;
}