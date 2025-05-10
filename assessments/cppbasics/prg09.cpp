

/*


9.Write a Program to Count the Number of Vowels


*/

#include <iostream>
#include<string>
void vowel(char[]);

using namespace std;

int main()
{
	char a[100];
	cin.getline(a,99);

	vowel(a);


	return 0;

}

void vowel(char ch[])
{
	int count = 0;
	int i = 0;
	while(ch[i]!='\0')
	{
			if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
			{
				count++;
			}

			i++;
	}
	cout << count;
}