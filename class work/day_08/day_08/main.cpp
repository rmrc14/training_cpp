// function with no arg and no return type
//function with no arg and return type
#include<iostream>
void display(void);
int displayret(void);
void sumIntegers(int, int);



using namespace std;

int main()
{
	//int ch;
	display();
	//cin >> ch;
	switch (displayret())  // cant declare variable in switch case
	{
	default:
		cout << "wrong choice";
		break;
	case 1:
		cout << "addition"<<endl;
		sumIntegers(24, 45);
		cout << "24+45";
		break;
	}


	return 0;
}
void display() {

	cout << "addition"<<endl;

}

int displayret()
{
	int ch;
	cout<<"choice";
	cin >> ch;

	return ch;

}

void sumIntegers(int v1, int v2)
{
	int sum = v1 + v2;
	cout << sum << "== sum";
	return  ;
}