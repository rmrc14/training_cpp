#ifndef   __EMPLOYEE__
#define  __EMPLOYEE__


#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

// ------------------- Employee Class -------------------
class Employee {
    static int emp_id_counter;  // static intialise outside the class
    int e_id;
    string emp_name;

public:
    Employee() : e_id(0), emp_name("") {}
    Employee(string name) {
        emp_id_counter++;
        e_id = emp_id_counter;
        emp_name = name;
    }

    void displayEmp() const {
        cout << "Employee ID: " << e_id << ", Name: " << emp_name << endl;
    }
};

int Employee::emp_id_counter = 0; //static so declared outside class


#endif
