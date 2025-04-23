#include <iostream>
using namespace std;

void display1();
void display2();
void display3();
//void display4();



int main()
{
	//display1();
	//display2();
	display3();
	//display4();



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
		for (j = n - 1 - i; j >= 0; j--)
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
		for (i = 0; i < 5; i++)
			cout << "*";

		for (j = n - i - 1; j >= 0; j--)
			cout << "*";
		cout << endl;
	}
}