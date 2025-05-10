/*

25.Write a Program to Check if the Given String is Palindrome or Not

*/

#include<iostream>
#define MAX 11

bool palindromeString(char[]);


using namespace std;
int main()
{
	char ch[MAX];

	cin.getline(ch, 10);

	if (palindromeString(ch))
	{
		cout << "palindrome: " << ch << endl;

	}
	else
	{
		cout << "not palindrome: " << ch;
	}
	cout << endl;

	return 0;
}
bool palindromeString(char str[])
{
	int i = 0, len = strlen(str);

	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
			return false;
	}

	return true;
}