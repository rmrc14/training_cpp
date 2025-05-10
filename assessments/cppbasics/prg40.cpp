/*
40.Write a Program to Count the Sum of Numbers in a String
*/

#include <iostream>
#include <cstring>  
#define MAX 100
using namespace std;


void strInt(char str[]);

int main() {
    char num[MAX];
	cin.getline(num,99);

   strInt(num);


    return 0;
}

void strInt(char str[])
{
	int sum = 0;
	
	for (int i = 0;i < strlen(str);i++)
	{
		if ((int)str[i] >= 48 && (int)str[i] <= 57)
		{
			sum += str[i] - 48;
		}
	}
	cout << "sum: " << sum;

}