#include<iostream>

using namespace std;

int main()
{
	string err = "error";
	string dbyzero = "divide by zero occured";
	int n1 = 10,n2 = 0;

	char* ptr = nullptr;



	try {
		if (n2 == 0)
			throw dbyzero;
		throw err;
	}
	catch (string e)
	{
		cout << " caught an exception :" << e << endl;
	}
	catch (int e)
	{
		cout << " caught an exception string:" << e << endl;
	}
	return 0;
}