#include<iostream>

using namespace std;

class A {
protected:
	int a;
	void dispAPrt() { cout << "A: method of protected" << endl; }
public:
	A() { a = 20; }
	void dispA() { cout << "A: a= " << a << endl; }
};


class B :public A
{
public:
	void dispB()
	{
		//a = 23;
		dispAPrt();
		dispA();
	}
};

class C :public A, public B
{

};




int main()
{
	/*A objA;
	objA.dispA();*/
	B objB;
	objB.dispB();

	return 0;
}