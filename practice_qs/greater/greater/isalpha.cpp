#include <iostream>
#include<ctype.h>
using namespace std;

void is_alpha(char);

int main()
{
	char ch;
	cout << "enter the ch:" << endl;
	cin >> ch;
	is_alpha( ch);

	return 0;

}
void is_alpha(char ch)
{

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		cout << "is alpha";
	else
		cout << "its not ";

}