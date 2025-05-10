/*


10.Write a Program to Remove the Vowels from a String


*/

#include <iostream>
#include<string>
void rem_vowel(char[]);

using namespace std;

int main()
{
	char a[100];
	cin.getline(a, 99);

	rem_vowel(a);


	return 0;

}

void rem_vowel(char ch[])
{
	
	int i = 0,j=0;
	while (ch[i] != '\0')
	{
		if (!(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'))
		{
			ch[j++] = ch[i];
		}

		i++;
	}
	ch[j] = '\0';
	cout <<ch;
}