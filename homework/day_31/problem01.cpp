/*

 Problem 1: Academic Result Management
Concepts: Class, Single Inheritance, Constructor, Method Overloading

Problem Statement: 
	Create a class Student with data members rollNo, name, and age.
	Create a derived class Marks that inherits from Student and contains marks of three subjects. 
	Use constructor initialization for all attributes. 
	Implement a method calculate() to compute total and average marks. 
	Overload the display() function to:

Display only student data (rollNo, name, age)
Display full result (including total and average)

*/
#include<iostream>
#include <string>

using namespace std;

class Student
{
private:
	int s_rollNo;
	string s_name;
	int s_age;
public:
	Student(string name,int rollno,int age):s_rollNo(rollno),s_age(age),s_name(name) {}
	~Student(){}
	void display()
	{

		cout << "\nStudent Info:" << endl;
		cout << "Roll No:" << s_rollNo << endl;
		cout << "name:  \t" << s_name << endl;
		cout << "age:   \t" << s_age << endl;
		
	}
};

class Marks :public Student
{
private:
	float m_total;
	float m_avg;
	float m1, m2, m3;
	void calculate()
	{
		m_total = m1 + m2 + m3;
		m_avg = m_total / 3;

	}

public:
	
	~Marks(){}
	Marks(string name,int age,int rollno,float m1,float m2 ,float m3): Student(name,rollno,age)
	{
		this->m1 = m1;
		this->m2 = m2;
		this->m3 = m3;
		calculate();
	}
	
	
	void display(bool flag)
	{
		Student::display();
		if(flag)
		{
			cout << endl;
			cout << "Full Result:" << endl;
			cout << "Total Marks:" << m_total << endl;
			cout << "Average Marks: " << m_avg << endl;
		}
		
	}
	
};

int main()
{
	string name;
	int rollno,age;
	float m1, m2, m3;
	cout<<"Enter Roll No : " ;
	cin >> rollno;
	cout<<"Enter Name : ";
	cin >> name;
	cout<<"Enter Age : ";
	cin >> age;
	cout<<"Enter Marks : ";
	cin >> m1 >> m2 >> m3;

	Marks M( name,  age,  rollno,  m1,  m2,  m3);

	M.display(true);

	return 0;
}