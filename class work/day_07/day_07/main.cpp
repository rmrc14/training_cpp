#include <iostream>
using namespace std;

void display1();
void display2();
void display3();
void display4();



int main()
{
	cout << "quest 3--- solution of q1 :"<<endl;
	display1();
	cout << "quest 3--- solution of q2 :" << endl;
	display2();
	cout << "quest 3--- solution of q3 :" << endl;
	display3();
	cout << "quest 3--- solution of q4 :" << endl;
	display4();
	cout << "quest 3--- solution of q5 :" << endl;


	return 0;
}



/*Q.
Write a c++ program to print alphabet triangle.
Input: 5
Output:

	 A
	ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA   */

void display1()
{

	int i, j;
	int n = 5;
	for (i = 0; i < 5; i++)
	{
		for (j = n- i-1; j >= 0; j--)
		{
			cout << " ";
		}
		for (char ch = 'A', j = n; j >= n - i; j--, ch++)
		{
			cout << ch;
		}
		for (char ch = 'A' + i - 1, j = n; j > n - i; j--, ch--)
		{
			cout << ch;
		}
		cout << endl;
	}

}

/*Q1.
Write the logic to print star pattern or rectangle star pattern.

Input Format  : First line contains N of type integer.

Output Format : Print the rectangle star pattern.

Constrains:
2<=N<=10

Sample Input:
5

Sample Output:
*****
*****
*****
*****
*****
*/

void display2() {

	int i, j;
	int n = 5;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			cout << "*";
		cout << endl;
	}
}



/*  Q2.
Write the logic to print right triangle star pattern.

Input Format  : First line contains N of type integer.

Output Format : Print the right triangle star pattern.

Constrains:
2<=N<=10

Sample Input:
5
Sample Output:
*
**
***
****
*****
****
***
**
*

*/

void display3() {

	int i, j;
	int n = 5;
	for (i = 0; i < 5; i++)
	{
		for (j=0;j<i;j++)
			cout << "*";
		
		cout << endl;
		
	}
	for (i = 0; i < 5; i++)
	{
		for (j=5;j>i;j--)
			cout << "*";
		
		cout << endl;
		
	}
}


/*Q3.
 Write the logic to print inverted right triangle star pattern.

Input Format  : First line contains N of type integer.

Output Format : Print the inverted right triangle star pattern.

Constrains:
2<=N<=10
Sample Input:
5

Sample Output:
*****
****
***
**
*

*/


void display4() {

	int i, j;
	int n = 5;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 5;j > i;j--)
			cout << "*";

		cout << endl;

	}
}