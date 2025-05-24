#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	int rollno;
	char name[20];
	
public:
	void display()
	{
		cout << "hello: " << endl;
		cout << "name:" << name << endl;
		cout << "rollno:" << rollno << endl;
	}

	void setName(char* s)
	{
		strcpy(name, s);
		//rollno = 10;
	}
	char* getName()
	{
		
		return name;
	}
	void setRollNo(int r) 
	{
		rollno = r;

	}
	int getRollNo()
	{
		return rollno;
	}
};


int main()
{
	Student s;
	cout << sizeof(s) << endl;

	

	char n[] = "remin";
	int r = 101;
	s.setRollNo(r);
	s.setName(n);
	s.display();
	
	cout << s.getName() << endl;
	cout << s.getRollNo() << endl;


	return 0;
}