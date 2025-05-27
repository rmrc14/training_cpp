#include<iostream>

using namespace std;


class Data
{
	
public:

	int a;

	void print() {
		cout << "a = " << a<< endl;
	}
};

int main()
{
	Data d, * dp;

	dp = &d;

	int Data::* ptr = &Data::a;
	d.*ptr = 10;

	d.print();
	d.*ptr = 20;




	dp->print();


	return  0;
}