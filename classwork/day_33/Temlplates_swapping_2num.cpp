#include<iostream>

using namespace std;

// Function Template
template 
<class T>

void mySwap(T &n1, T &n2)
{
	T temp = n1;
	n1 = n2;
	n2 = temp;


}


template 
<class T1,class T2>
float add(T2 n, T1 m)
{
	return n + m;
}



int main()
{
	int a = 10, b = 20;

	float c = 194.3, d = 34.4;


	cout << "a: " << a << " B: " << b << endl;
	mySwap(a, b);

	cout << "a: " << a << " B: " << b << endl;

	cout << "c: " << c << " d: " << d << endl;
	mySwap(c, d);

	cout << "c: " << c << " d: " << d << endl;
	
	cout<<add(12.34, 45);


	return 0;
}