#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Employee {
	char e_name[50];
	static int emp_count;
	int e_id;

public:
	Employee() {
		e_id = emp_count++;
		strcpy(e_name, "Unknown");
	}

	Employee(const char* e_name) {
		e_id = emp_count++;
		strcpy(this->e_name, e_name);
	}

	const char* getName() const {
		return e_name;
	}

	int getid() const {
		return e_id;
	}

	void setName(const char* name) {
		strcpy(e_name, name);
	}

	static void resetEmpCount(int val = 0) {
		emp_count = val;
	}
};

int Employee::emp_count = 0;
