#include<iostream>

using namespace std;

class A
{
	int a;
public:
	A(int x):a(x) { cout << "constructor A got called" << endl; }
	~A(){ cout << "destructor A got called" << endl; }
	void dispA() { cout << "a= " << a << endl; }
};

//2 base class

class B {

	int b;
public:
	B(int y) :b(y) { cout << "constructor B got called" << endl; }
	~B(){ cout << "destructor B got called" << endl; }
	void dispB() { cout << "b= " << b << endl; }
};

//3 base class

class C :public B, public A
{

	int c;
public:
	C(int x,int y,int z) :A(x),B(y),c(z) { cout << "constructor C got called" << endl; }
	~C() { cout << "destructor C got called" << endl; }
	void dispC() { cout << "c= " << c << endl; }
};


int main()
{
	C cObj(10, 20, 30);



	return 0;

}