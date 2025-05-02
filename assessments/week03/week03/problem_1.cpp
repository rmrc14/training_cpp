/*
problem 1
Write a program that performs the following tasks:

Finds the starting positions (0-based index) of the substrings "are" and "i" in a given input string.
Calculates and prints the sum of these two positions.
If either of the substrings is not found in the input, treat its position as -1.

*/



#include<iostream>
#include<cstring>
#define MAX 100
int stringCompare(char []);
using namespace std;

int main()
{
	int res;

	char arr[MAX] = "he works at tcs";//"there are fruits in the basket";//"The sun is beautiful";//"We are playing football";  

	for(int i=0 ; i<MAX&& arr[i]!='\0';i++) //output string
		cout << arr[i];
	
	cout << endl;
;

	res=stringCompare(arr);


	cout << "sum : " << res;
	


	return 0;
}

int stringCompare(char s1[])
{
	int i = 0;
	int sum = 0;
	
	int foundare = 0;
	int foundi = 0;

	while (s1[i] != '\0')
	{
		if ((s1[i] == 'a' && s1[i + 1] == 'r' && s1[i + 2] == 'e')&&foundare==0) // checks 'are' in the adjacent index ('r e')also
		{
			cout << i<<endl;
			foundare = 1;
			sum += i;
		}
		
			
		if (s1[i] == 'i'&& foundi==0) // checks 'i' is in first place 
		{
			cout << i<<endl;
			foundi = 1;
			sum += i;
		}
		
			i++;   // iteration for the while loop 
	}

	if (foundare == 1 && foundi == 1)
		return sum;
	else if(( foundare==1 and foundi==0)||(foundare == 0 and foundi == 1))
	{ 
		return sum - 1;
	}
	else

	{
		return sum-2;
	}
}