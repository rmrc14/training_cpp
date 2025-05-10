/*


11.Write a Program to Remove All Characters From a String Except Alphabets

*/

#include <iostream>
#include<string>
void rem_char(char[]);

using namespace std;

int main()
{
	char a[100];
	cin.getline(a, 99);

	rem_char(a);


	return 0;

}

void rem_char(char ch[])
{

	int i = 0, j = 0;
	while (ch[i] != '\0')
	{
		if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
		{
			ch[j++] = ch[i];
		}

		i++;
	}
	ch[j] = '\0';
	cout << ch;
}