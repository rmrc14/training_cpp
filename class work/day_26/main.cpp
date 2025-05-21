#include<iostream>
#include<string>
using namespace std;

class Student 
{
protected:
	int rollno;
	string name;
	/*string dept;
	string batch;*/
public:
	void display(string str1)
	{
		cout << "hello: " <<str1<< endl;
		cout <<"name:" << name << endl;
		cout << "rollno:" << rollno << endl;
	}

	void setName(string s)
	{
		name = s;
		rollno = 10;
	}

};


int main()
{
	Student s;
	cout << sizeof(s)<<endl;

	/*s.name = 'abc';
	s.rollno = 101;

	cout << s.name << "\t" << s.rollno << endl;*/

	string name = "remin";
	s.display(name);
	s.setName("changed");
	s.display(name);



	return 0;
}