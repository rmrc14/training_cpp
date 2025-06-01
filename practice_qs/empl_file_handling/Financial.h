#ifndef FINANCIAL_H
#define FINANCIAL_H

#include "Employee.h"

class Financial : public Employee {
    double salary;

public:
    Financial(const char* name = "", double sal = 0.0)
        : Employee(name), salary(sal) {}

    void setSalary(double sal) { salary = sal; }
    double getSalary() const { return salary; }

    void print() const override {
        Employee::print();
        std::cout << ", Salary: " << salary << std::endl;
    }
};

#endif
