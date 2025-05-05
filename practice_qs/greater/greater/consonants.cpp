#include <iostream>
#include<ctype.h>
using namespace std;

int main()
{
	char ch;
	cout << "enter the ch:" << endl;
	cin >> ch;
	ch=tolower(ch);

	if (ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		cout << "is vowel :" << ch << endl;
	else
		cout << "is not a vowel :" << ch << endl;


	return 0;

}