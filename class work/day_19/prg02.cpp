#include <iostream>

using namespace std;

int main()
{


	int a[] = {10,20,30};

	cout << a[0] << "\t" << a[1] << "\t" << a[2] << endl;


	int* ptr = nullptr;

	//ptr = &a[0];
	//ptr = &*(a+0);  nullified 
	//ptr = (a + 0);
	ptr = a;
	cout << *ptr << endl;

	ptr = ptr + 1;// &a[1];
	cout << *ptr << endl;

	//ptr = ptr + 1;
	ptr++;
	cout << *ptr << endl;

	return 0;

}