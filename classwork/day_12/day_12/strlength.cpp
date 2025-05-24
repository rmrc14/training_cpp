/* 
		implement strlength function 

*/

#include<iostream>
#define MAX 50

//void stringlength(char[], int);
void stringlength(char[]);
using namespace std;

int main()
{
	char arr[50];

	cout << "enter string:" << endl;
	fgets(arr, 20, stdin);
	/*
	for (int i = 0;i < 50;i++)
		cin >> arr[i];*/
	
	//stringlength(arr, MAX);
	stringlength(arr);
	return 0;
}
/*
void stringlength(char arr1[], int size)
{
	int count = 0;
	while (arr1[count] == '\0')
	{
		count++;
		cout << count << endl;
	}
	cout <<"the size is" << count - 1;
}*/
void stringlength(char arr1[])
{
	int count = 0;
	while (arr1[count] != '\0')
	{
		count++;
		cout << count << endl;
	}
	cout << "the strlength is :" << count-1;
}