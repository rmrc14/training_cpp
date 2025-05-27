#include<iostream>

using namespace std;


//base class
class A {

private:
	int x;
protected:
	void proMethod() { cout << "a: protected method got called" << endl; }
	int y;
public:
	A() {
		x = 10;y = 20;
		cout << "constructor got called A"<<endl;
	}
	void dispA() {
		cout << "hello from A" << endl;
		cout << "x= " << x << "\ty= " << y << endl;
	}
};


//derived class
class B:public  A {

private:
	int a;
protected:
	int b;
public:
	B() { a= 11;b = 22;
	cout << "constructor got called B" << endl;
	}
	void dispB() {
		cout << "hello from B" << endl;
		cout << "a= " << a << "\tb= " << b << endl;
	}
	void protectB() { proMethod();
		//cout<<y<<endl;
	}
};

int main()
{

	A objA;
	B objB;  // here both the A and B constructor got called 

	objA.dispA();

	objB.dispB();
	objB.dispA();
	objB.protectB();


	return 0;
}