

/*


7.Write a Program to Find the Length of the String Without using strlen() Function



*/
#include <iostream>
#include<cctype>
#include<string>
#define MAX 100
void strlength(char[]);

using namespace std;

int main()
{
	char a[MAX];
	cin.getline(a, 99);

	strlength(a);


	return 0;

}

void strlength(char ch[])
{
	int count = 0;
	while (ch[count++] != '\0');

	cout << count-1;

}