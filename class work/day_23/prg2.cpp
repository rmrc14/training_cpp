#include <iostream>

using namespace std;

void display(const char[]);



int main()
{
	char s[] = "remin";
	display("haidks");
	display(s);

	return 0;

}

void display(const char name[])//can't change or modify value inside it (read only)
{
	while (*name!= '\0')
	{
		cout << *name++<<" ";

		
	}

	cout << endl;
}