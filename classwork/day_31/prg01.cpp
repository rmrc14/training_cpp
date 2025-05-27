#include<iostream>
using namespace std;

class person
{
private:
	string ssn;
protected:
	string name;
	char gender;
	int age;
public:
	person(string s, string n, char g, int a) :ssn(s), name(n), gender(g), age(a) {
		cout << "const person got  called" << endl;
	}

	void dispPerson()const{
		cout << "Person details-----" << endl;
		cout << "name : " << name << endl;
		cout << "ssn: " << ssn << endl;
		cout <<  "gender: " << gender << endl;
		cout << "age: " << age << endl;
		cout << "==========================" << endl;

	}
	~person() {
		cout << "person destructor got called" << endl;
	}
};
class employee:public person
{
private:
	int e_id;
	float e_sal;
	string e_desg;
public:
	employee(string ssn, string n, char g, int age, int id, float sal, string desg) :person(ssn, n, g, age), e_id(id), e_sal(sal), e_desg(desg) {
		cout << "const emp called" << endl;
	}

	~employee() {
		cout << "employee destructor got called" << endl;
}
	void displayEmp()const {
		cout << "employee--------" << endl;
		cout << "ID:" << e_id << endl;
		cout << "e_sal:" << e_sal << endl;
		cout << "e_desg:" << e_desg << endl;
	}

};

int main()
{
	employee e("ADH", "remin", 'm', 45, 101, 10000, "SSE");
	e.dispPerson();
	e.displayEmp();

	return 0;
}