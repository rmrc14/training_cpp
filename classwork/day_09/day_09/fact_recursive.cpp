#include <iostream>

using namespace std;

int fact(int);



int main()
{
	int ret = 0;
	cout << "enter the no." << endl;
	cin >> ret;
	ret = fact(ret);
	cout << "ret: " << ret << endl;
	return 0;
}

int fact(int v) {

	if (v <= 1)
		return 1;
	return v * fact(v-1);  

}