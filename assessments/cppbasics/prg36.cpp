/*
36.Write a C++ Program to Print the Given String in Reverse Order Using Recursion
*/


#include<iostream>
#include<cstring>
#define MAX 100

void reverseRecursive(char[], int,int);


using namespace std;
int main()
{
	char c[MAX];

	cin.getline(c, 99);

	int s = strlen(c);

    reverseRecursive(c, 0,s-1);
    cout << "Reversed : " << c << endl;


	return 0;
}
void reverseRecursive(char str[], int start, int end)
{
    if (start >= end)
        return; 

    
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

   
    reverseRecursive(str, start + 1, end - 1);
}