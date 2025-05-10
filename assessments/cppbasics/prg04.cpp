/*


4. Write a Program to Find the ASCII Value of a Character



*/
#include <iostream>

void asciichar(char);

using namespace std;

int main()
{
	char a;
	cin >> a;

	asciichar(a);


	return 0;

}

void asciichar(char ch)
{
	cout << int(ch);

}