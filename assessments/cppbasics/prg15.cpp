/*


15.Write a Program to Find a Leap Year or Not

*/

#include <iostream>

bool leapyear(int);

using namespace std;

int main()
{
	int a;
	cin >> a;

	if (leapyear(a))
	{
		cout << "leap year";
	}
	else
		cout << "not leap year";


	return 0;

}

bool leapyear(int num)
{

	if (num % 400 == 0)
		return true;
	if (num % 100 == 0)
		return false;
	if (num % 4 == 0)
		return true;
}