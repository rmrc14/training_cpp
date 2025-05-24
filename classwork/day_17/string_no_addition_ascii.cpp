/*


*/


#include<iostream>
#include<cctype>
#define MAX 10

void strInt(char[]);
void strInt2(char[]);


using namespace std;
int main()
{
	char ch[MAX];
	fgets(ch, 9, stdin);

	strInt(ch);
	cout << endl;
	strInt2(ch);
	cout << endl;
	return 0;
}

void strInt(char str[])
{
	int sum = 0;

	for (int i = 0;i < strlen(str);i++)
	{
		if (isdigit(str[i]))
		{
			sum += str[i] - 48;
		}
	}
	cout << "sum =" << sum;

}

void strInt2(char str[])
{
	int sum = 0;
	cout << "without func:" << endl;
	for (int i = 0;i < strlen(str);i++)
	{
		if ((int)str[i]>=48&& (int)str[i]<=57)
		{
			sum += str[i] - 48;
		}
	}
	cout << "sum =" << sum;

}