#include <iostream>

using namespace std;

#define sq(x) x*x

inline int square(int x) { return x * x; }

int main()
{
	cout << square(2 + 3) << endl;

	cout << sq(2 + 3) << endl;


	return 0;
}