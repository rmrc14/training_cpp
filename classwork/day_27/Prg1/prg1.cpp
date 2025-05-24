#include<iostream>

using namespace std;

//class T {
//
//private:
//	static int val;
//public:
//	T() {
//		val++;
//	}
//	static int getVal() { return val; }
//	void disp()
//	{
//		cout << "value of val: " << val<<endl;
//	}
//};
//
//int T::val;

int main()
{
	/*T t1;
	t1.disp();

	T t2;
	t2.disp();*/

	static int* a = new int(10);
	//delete a;
	*a = 10;
	cout<<*a;

}