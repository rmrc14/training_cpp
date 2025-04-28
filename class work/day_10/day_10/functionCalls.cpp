
/*
	 calling of functions
	 1. call by value
	 2. call by reference
	 3. call by pointers

*/



#include <iostream>

int add(int , int);
int updateAdd(int, int);
int updateAdd2(int *, int *); //pointers point to int datatype it will read from right to left
int updateAdd3(int&, int&);
using namespace std;


int main()
{

	int a = 10, b = 98;
	int res = add(a, b);
	cout << res << endl;
	res = updateAdd(a, b);
	cout << "updated value:\n"<<res;
	cout <<"\n" << a << " = a\n";
	cout << b << " = b\n";

	res = updateAdd2(&a, &b);
	cout << "updated value:\n" << res;
	cout <<"\n"<< a << " = a\n";
	cout << b << " = b\n";



	//call by reference
	res = updateAdd3(a, b);
	cout << "updated value:\n" << res;
	cout << "\n" << a << " = a\n";
	cout << b << " = b\n";

	return 0;

}
//call by value
int add(int v1, int v2)
{


	return v1 + v2;
}

int updateAdd(int v1, int v2)
{
	v1 += 2;
	v2 /= 3;
	cout << v1 << " = v1\n";
	cout << v2 << " = v2\n"<<endl;
	return v1 + v2;

}
//call by address
int updateAdd2(int *v1, int *v2)
{
	cout << v1 << " " << v2 << endl;
	*v1 += 2;
	*v2 /= 3;
	cout << *v1 << " = v1\n";
	cout << *v2 << " = v2\n" << endl;
	return *v1 + *v2;

}

//call by reference
int updateAdd3(int& v1, int& v2)
{
	cout << "call by refernce\n";
	cout << v1 << " " << v2 << endl;
	v1 *=10;
	v2 =v2*v1;
	cout <<"changed valu\n" << v1 << " = v1\n";
	cout << v2 << " = v2\n" << endl;
	return v1 + v2;

}