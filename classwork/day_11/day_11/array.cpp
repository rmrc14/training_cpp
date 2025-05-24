#include <iostream>
#define CAP 5
using namespace std;

int main()
{
	// int arr[3] = { 101,201,333 };   //dec with initialisation
	int arr[CAP],num;
	for (int iv = 0; iv < CAP;iv++)
	{
		cout << "enter the array values (5) :"<<iv << endl;
		cin >> arr[iv];
	}
	cout << "enter the number to be searched :" << endl;
	cin >> num;
	for (int iv = 0; iv < CAP;iv++)
		if (arr[iv] == num)
		{
			cout << "element found in index value : " << iv << endl;

			return 0;
		}
			cout << "element not found: " << endl;
	/*for (int iv = 0; iv<10;iv++)
		cout << "arr["<<iv<<"]= " << arr[iv] << endl;*/
	


	return 0;
}