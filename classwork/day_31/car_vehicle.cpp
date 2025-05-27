#include<iostream>
#include <string>
using namespace std;


//class Vehicle {
//
//protected:
//	int v_wheel;
//	bool v_engine;
//
//
//public:
//	Vehicle() {
//		v_wheel = 1;
//		v_engine= false;
//	}
//
//
//};
//
//class car :public Vehicle
//{
//private:
//	int c_name;
//	string c_type;
//	int c_hp;
//	string c_brand;
//public:
//	car() {
//		v_wheel = 4;
//		c_hp = 10;
//		v_engine = true;
//		c_type = "sedan";
//	}
//	void setBrand(string c_brand) {
//		this->c_brand = c_brand;
//	}
//
//	void display()
//	{
//		cout << "c_name: " << c_name << endl;
//		cout << "c_type: " << c_type << endl;
//		cout << "c_hp: " << c_hp << endl;
//		cout << "c_brand: " << c_brand << endl;
//	}
//};
//
//
//int main()
//{
//
//	Vehicle v;
//	car c;
//	c.setBrand("toyota");
//	c.display();
//
//	return 0;
//}

class A
{
protected:
	int x, y;
public:
	//A() { this->x = 0; this->y = 0; }
	A(int x, int y) { this->x = x; this->y = y; }

	void dispA() { cout << "x: " << x << "\t y: " << y << endl; }
};

class B : public A
{
protected:
	int a, b;
public:
	B(int x, int y, int a, int b) : A(x, y), a(a), b(b) { }//this->a = a; this->b = b; }

	void dispB() { cout << "a: " << a << "\t b: " << b << endl; }
};


int main()
{
	B objB(10, 20, 30,40);
	
	objB.dispA();

	objB.dispB();

}