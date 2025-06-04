/*

Q.
Write a c++ program to print alphabet triangle.
Input: 5
Output:

	 A
	ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA

*/




#include<iostream>

using namespace std;


int main(){


	int n;
	char ch = 'A';

	cout << "enter the no of alphabets to be printed(5)" << endl;
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		for (int j = i;j < n;j++)
		{
			cout << "  ";
		}
		for (int k = 1;k <= (2*i-1);++k)
		{
			
			cout << ch;
		}

		
		cout << endl;
		//cout << ch;
	}


	 
	
	return 0;

}