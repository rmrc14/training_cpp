/*
Problem Statement 1
Write a program that performs the following tasks:

Finds the starting positions (0-based index) of the substrings "are" and "i" in a given input string.
Calculates and prints the sum of these two positions.
If either of the substrings is not found in the input, treat its position as -1.
*/



#include<iostream>
#include<cstring>
#define MAX 100

void subString(char [],char[],char[]);
using namespace std;

int main()
{
	char line[MAX];
	
	
	cout << "enter the string: " << endl;
	fgets(line,MAX,stdin);  // gets spaces -- also cin doesnot get after spaces 

	
	char s1[] = "are";
	char s2[] = "i";

	subString(s1, s2, line);
	
	

	return 0;
}


void subString(char ss1[], char ss2[],char line[])
{
	int p1 = 0, p2 = 0;

	char* res1 = strstr(line, ss1); //gets first occurence of the string and gets the string from there till end
	char* res2 = strstr(line, ss2);

	if (res1 != nullptr)   //nullptr error
	{
		p1 = (unsigned long int)res1 - (unsigned long int)line;// base add of res - base add of line
	}														   //ex -         79  -   77 =3
	else
		p1 = -1;


	if (res2 != nullptr)
	{
		p2 = (unsigned long int)res2 - (unsigned long int)line;
	}
	else
		p2 = -1;

	cout << "sum = " << p1 + p2 << endl;
}