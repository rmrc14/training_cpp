#include<iostream>
using namespace std;


class B
{
public:
	void printB() { cout << "print b" << endl; }
	void disp() { cout << "B"; }
};


class D
{
public:
	void disp() { cout << "D" << endl; }
};

int main()
{
	B* ptr = new B;
	ptr->printB();
	ptr->disp();




	return 0;
}