#include<iostream>

using namespace std;

// Function Template
template
<class T>
class Box
{
private:
	T data;
public:
	Box(T value): data(value){}
	void printData() { cout << "Data: " << data << endl; }
};

int main()
{
	Box <int> intBox(10);
	intBox.printData();

	Box <string> stringBox("adskf");
	stringBox.printData();
}