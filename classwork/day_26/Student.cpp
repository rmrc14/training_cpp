#include<iostream>
#include<string>
#include "Student.h"

using namespace std;

void Student::setSgpa(int marks[])
{
	for (int i = 0;i < 8;i++)
	{
		s_sgpa[i] = marks[i];
	}
}


void Student::display()
{

	cout << "name       \t:" << name << endl;
	cout << "rollno    \t:" << rollno << endl;
	cout << "phone no   \t:" << s_phnno << endl;
	cout << "address  \t:" << s_address << endl;
	cout << "dept      \t:" << s_dept << endl;
	cout << "cgpa: ";

	cout << endl;
	cout << "sgpa:      \t" << s_cgpa << "or" << calcAvg() << endl;
}



void Student::setDept(char* d)
{
	strcpy(s_dept, d);
}
void Student::setPhnNo(int r) {
	s_phnno = r;
}
void Student::setAddr(char* a)
{
	strcpy(s_address, a);
}
void Student::setName(char* s)
{
	strcpy(name, s);

}
void Student::setRollNo(int r)
{
	rollno = r;

}
char* Student::getName()
{

	return name;
}

int Student::getRollNo()
{
	return rollno;
}
int Student::getPhnNo()
{
	return s_phnno;
}
char* Student::getAddr()
{
	return s_address;
}
char* Student::getDept()
{
	return s_dept;
}
float Student::calcAvg()
{
	float avg = 0.0;
	for (int i = 0;i < 8;i++)
	{
		cout << s_sgpa[i] << " ";
		avg += s_sgpa[i];
	}
	return s_cgpa = avg / 8;


}