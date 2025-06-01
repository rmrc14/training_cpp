#include<iostream>

using namespace std;

class myArray
{
	int* data;
	
public:
	~myArray() {
		delete data;
	}
	myArray(myArray& fobj)
	{
		cout << "deep copy constructor got called " << endl;
		data = new int(*fobj.data); //deep copy
	}

	myArray(int val)
	{
		data = new int(val);
		
	}
	void setValue(int v) { *data = v; }
	
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

	//shallow copy
	myArray A2 = A1;  //create a reference to another object
					// when data changed 


	A2.display();

	
	A2.setValue(20);

	A1.display();
	A2.display();
	return 0;
}