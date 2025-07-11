#include<iostream>

using namespace std;

class SmartPtr
{
	int* ptr;
public:
	explicit SmartPtr(int* p = nullptr) { ptr = p; }

	~SmartPtr() { delete ptr; }

	int& operator*() { return *ptr; }

};

int main()
{
	SmartPtr ptr(new int()); // () intialise it to zero 
	*ptr = 20;
	cout << *ptr;


	return 0;
}