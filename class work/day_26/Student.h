//#pragma once
#ifndef __STUDENT__
#define __STUDENT__

class Student
{
private:
	int rollno;
	char name[20];
	int s_phnno;
	char s_address[20];
	char s_dept[20];

protected:
	int s_cgpa;
	int s_sgpa[8];
	float calcAvg();

public:
	void setSgpa(int[]);
	void display();
	void setDept(char*);
	void setPhnNo(int);
	void setAddr(char*);
	void setName(char*);
	void setRollNo(int);

	char* getName();
	int getRollNo();
	int getPhnNo();
	char* getAddr();
	char* getDept();
};

#endif