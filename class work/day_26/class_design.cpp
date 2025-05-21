#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	int rollno;
	char name[20];
	int s_phnno;
	char s_address[20];
	char s_dept[20];
	char grade;
	
protected:
	float s_cgpa;
	int s_sgpa[8];
	float calcAvg();
	void grading();

public:
	void setSgpa(int []);
	void display();
	void setDept(char* );
	void setPhnNo(int );
	void setAddr(char* );
	void setName(char* );
	void setRollNo(int );

	char* getName();
	int getRollNo();
	int getPhnNo();
	char* getAddr();
	char* getDept();
	
};

void Student::grading()
{
	if (s_cgpa >= 9 and s_cgpa <= 10)
		grade = 'A';
	else if (s_cgpa >= 8 and s_cgpa < 9)
		grade = 'B';
	else if (s_cgpa >= 7 and s_cgpa < 8)
		grade = 'C';
	else if (s_cgpa >= 6 and s_cgpa < 7)
		grade = 'D';
	else if (s_cgpa >= 5 and s_cgpa < 6)
		grade = 'E';
	else if (s_cgpa >= 4.5 and s_cgpa< 5)
		grade = 'P';
	else if (s_cgpa < 4.5)
		grade = 'F';
}


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
	cout << "grade:       \t" << grade;
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
	s_cgpa = avg / 8;
	
	grading();
	return s_cgpa;


}

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