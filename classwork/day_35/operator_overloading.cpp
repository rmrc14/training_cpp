#include<iostream>

using namespace std;

class myArray
{
	int* data;

public:
	//operator overloading 
	myArray operator +(const myArray& fObj)
	{
		return myArray(*data + *fObj.data );
	}
	myArray& operator ++() //prefix
	{
		++*data;
		return *this;
	}
	myArray& operator ++(int) //postfix
	{
		int temp = *data;
		temp++;
		*data = temp;
		return *this;
	}
	friend ostream& operator <<(ostream& os, const myArray& fObj)
	{
		os << "Data: " << *fObj.data << endl;
		return os;
	}
	int operator()(int x) const {

		return *data= x + *data;
	}

	// default constructor
	myArray(){}
	~myArray() {
		delete data;
	}
	myArray(const myArray& fobj)
	{
		cout << "deep copy constructor got called " << endl;
		data = new int(*fobj.data); //deep copy
	}

	myArray(int val)
	{
		data = new int(val);

	}
	void setValue(int v) { *data = v; }
	int getValue() { return *data; }
	void display()
	{
		cout << "address:: " << data << "\t";
		cout << *data << endl;

	}
};

int main()
{
	myArray A1(10);

	A1.display();

	
	myArray A2 = A1;   


	A2.display();


	A2.setValue(20);

	A1.display();
	A2.display();
	cout << "addition of obj"<<endl;
	myArray a3 = A1 + A2;
	a3.display();
	++a3;
	a3.display(); //131
	a3++;
	a3.display(); //131

	cout << a3;

	//cin >> a3;
	cout << "functors:" << endl;
	a3(10);
	a3.display();

	return 0;
}