#include<iostream>

using namespace std;


class test
{
	int x;
	int y;
public:

	test(int x, int y) { this->x = x;this->y = y; }

	test& setX(int x) { this->x = x; return *this; }
	test& setY(int y) { this->y = y; return *this; }

	void display() {
		cout << "x= " << this->x << "\ty= " << this->y<<endl;
	}
};

int main()
{
	test objT(5,5);

	objT.display();

	objT.setX(101);
	objT.setY(102);
	objT.display();

	cout << &objT;

	return  0;
}