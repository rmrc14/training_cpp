#pragma once
#include "Employee.h"

class Financial : public Employee {
	double salary;

public:
	Financial() : Employee() {
		salary = 0.0;
	}

	Financial(const char* e_name, double sal) : Employee(e_name) {
		salary = sal;
	}

	double getSalary() const {
		return salary;
	}

	void setSalary(double sal) {
		salary = sal;
	}

	void display() const {
		cout << "name: " << getName() << endl;
		cout << "id: " << getid() << endl;
		cout << "salary: " << salary << endl;
	}
};
