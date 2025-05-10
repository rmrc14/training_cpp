/*


3. C++ Program To Check Whether Number is Even Or Odd
*/
#include <iostream>

void even_odd(int);

using namespace std;

int main()
{
	int a, b, c;
	cin >> a ;

	even_odd(a);


	return 0;

}

void even_odd(int a)
{
	if (a % 2 == 0)
	{
		cout << "even";
	}
	else
	{
		cout << "odd";
	}

}