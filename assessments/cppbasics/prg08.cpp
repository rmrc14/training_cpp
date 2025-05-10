

/*


8.Write a Program to Toggle Each Character in a String



*/
#include <iostream>
#include<cctype>
#include<string>
#define MAX 100
void toggle(char[]);

using namespace std;

int main()
{
	char a[MAX];
	cin.getline(a, 99);

	toggle(a);


	return 0;

}

void toggle(char ch[])
{
	int count = 0;
	while (ch[count] != '\0') 
	{
		if (islower(ch[count]))
		{
			 ch[count]= toupper(ch[count]);
		}
		else if (isupper(ch[count]))
		{
			ch[count]= tolower(ch[count]);
		}
		count++;
	}

	cout << ch;

}