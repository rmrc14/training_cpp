#include <iostream>

using namespace std;

class A {
protected:
	int a;
public:
	A(int x) : a(x) { cout << "Contr A got called and a=" << a << endl; }
	~A() { cout << "Destr A got called" << endl; }
	void disp() { cout << "a = " << a << endl; }
};


class B : protected A
{

protected:
	int b;
public:
	B(int x, int y) : A(x), b(y) { cout << "Contr B got called and b=" << b << endl; }
	~B() { cout << "Destr B got called" << endl; }
	void dispB() {
		cout << "b = " << b << endl;
		cout << "a = " << a << endl;
	}
};

class C : public B
{
	int c;
public:
	C(int x, int y, int z) : B(x, y), c(z) { cout << "Contr C got called" << endl; }
	~C() { cout << "Destr C got called" << endl; }
	void dispC() {
		A::disp();

		//cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
	}

};

//class D
//{
//public:
//
//	D(int x,int y ,int z){}
//
//
//};
int main()
{
	//B objB(10,20);
	//objB.dispB();
	A obJA(234);
	obJA.disp();

	C objC(10, 20, 30);
	//objC.dispC();
	objC.dispC();
}