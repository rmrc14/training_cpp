#include<iostream>
using namespace std;


class Value {

protected:
	int num1,num2;
public:
	void setNums(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;

	}
};

class Multiplier:public Value
{
private:
	int prod;
public:
	void setValues() {
		cout << "enter num1 and num2 values" << endl;
		cin >> num1 >> num2;
	}
	int multiply() { return prod=num1 * num2; }
};


int main()
{

	Multiplier m;
	m.setValues();
	cout<<"prod: "<<m.multiply() << endl;


	return 0;
}