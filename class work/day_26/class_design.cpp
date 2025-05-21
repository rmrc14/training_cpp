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
	float calcAvg()
	{
		float avg = 0.0;
		for (int i = 0;i < 8;i++)
		{
			cout << s_sgpa[i] << " ";
			avg += s_sgpa[i];
		}
		return s_cgpa = avg / 8;


	}
protected:
	int s_cgpa;
	int s_sgpa[8];


public:
	void setSgpa(int marks[])
	{
		for(int i=0;i<8;i++)
		{
			s_sgpa[i] = marks[i];
		}
	}
	

	void display()
	{
		
		cout << "name       \t:" << name << endl;
		cout << "rollno    \t:" << rollno << endl;
		cout << "phone no   \t:" << s_phnno << endl;
		cout << "address  \t:" << s_address << endl;
		cout << "dept      \t:" << s_dept << endl;
		cout << "sgpa: ";
		
		cout << endl;
		cout << "sgpa:      \t" << s_cgpa<<"or"<<calcAvg() << endl;
	}
	


	void setDept(char* d)
	{
		strcpy(s_dept, d);
	}
	void setPhnNo(int r) {
		s_phnno = r;
	}
	void setAddr(char* a)
	{
		strcpy(s_address, a);
	}
	void setName(char* s)
	{
		strcpy(name, s);
		
	}
	void setRollNo(int r)
	{
		rollno = r;

	}
	char* getName()
	{

		return name;
	}
	
	int getRollNo()
	{
		return rollno;
	}
	int getPhnNo()
	{
		return s_phnno;
	}
	char* getAddr()
	{
		return s_address;
	}
	char* getDept()
	{
		return s_dept;
	}

};


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