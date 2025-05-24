#include<iostream>
#include "Student.h"

using namespace std;

int main()
{
	Student s;
	cout << sizeof(s) << endl;



	char n[] = "remin";
	int r = 101;
	int phn = 1234567;
	char addr[] = "pathanamthitta";
	char dept[] = "computer science";
	int marks[] = { 9,8,7,5,7,8,9,8 };

	s.setSgpa(marks);
	s.setDept(dept);
	s.setPhnNo(phn);
	s.setAddr(addr);
	s.setRollNo(r);
	s.setName(n);

	s.display();
	cout << endl;


	cout << "=========================" << endl;
	cout << s.getName() << endl;
	cout << s.getRollNo() << endl;
	cout << s.getAddr() << endl;
	cout << s.getPhnNo() << endl;
	cout << s.getDept() << endl;


	return 0;
}