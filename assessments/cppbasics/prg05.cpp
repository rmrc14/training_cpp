/*


5. Write a Program to Check Whether a Character is a Vowel or Consonant



*/
#include <iostream>
#include<cctype>
void vowel(char);

using namespace std;

int main()
{
	char a;
	cin >> a;

	vowel(a);


	return 0;

}

void vowel(char ch)
{
	if (isalpha(ch))
	{
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		{
			cout << "vowels";
		}
		else
		{
			cout << "consonants";
		}
	}
	else
		cout << ch << " is not an alphabet." << endl;

}