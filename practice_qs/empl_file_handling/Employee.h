
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <cstring>

class Employee {
protected:
    char e_name[50];
    int e_id;
    static int emp_count;

public:
    Employee(const char* name = "") {
        e_id = ++emp_count;
        strncpy(e_name, name, sizeof(e_name) - 1);
        e_name[sizeof(e_name) - 1] = '\0';
    }

    int getID() const { return e_id; }
    const char* getName() const { return e_name; }
    void setName(const char* name) {
        strncpy(e_name, name, sizeof(e_name) - 1);
        e_name[sizeof(e_name) - 1] = '\0';
    }

    virtual void print() const {
        std::cout << "ID: " << e_id << ", Name: " << e_name;
    }
};

int Employee::emp_count = 0;

#endif
