#include<iostream>

using namespace std;

void greet()
{
	cout << "hello world!" << endl;

}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}

int main()
{
	void(*fptr)() = greet;

	fptr();
	 

	int (*fptr1)(int ,int ) = add;
	cout<<fptr1(10, 20)<<endl;

	fptr1 = sub;
	cout<<fptr1(100, 20)<<endl;




	return 0;
}