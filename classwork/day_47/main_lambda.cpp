
#include<iostream>

using namespace std;


int main()
{

	auto greet = [](const string name) { cout << "greet" << name << endl;return "greeted";};


	cout<<greet(" name "); // greet access the return address of the function stack frame created




	return 0;

}