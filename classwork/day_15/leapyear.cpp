#include <iostream>
#define MAX 100

bool leapyear(int);
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (leapyear(n))
	{
		cout << "leap year";
	}
	else
	{
		cout << "not";
	}

	return 0;
}
bool leapyear(int year)
{
	int prod = 1;

	if (year % 4 != 0) return false;
	else if (year % 100 != 0) return true;
	else if (year % 400 == 0) return true;
	else 
		return false;

	

}