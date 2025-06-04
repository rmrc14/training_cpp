#ifndef   __STACK__
#define  __STACK__


#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

// ------------------- Stack Class -------------------
class Stack {
    Employee* arr;
    int top;
    int MAX;

public:
    Stack(int size = 3) {
        MAX = size;
        arr = new Employee[MAX];
        top = -1;
    }

    ~Stack() {
        delete[] arr; // to delete the Employee allocated
    }

    bool push(const Employee& emp) {
        if (top == MAX - 1) {
            cout << "Stack is full!" << endl;
            return false;
        }
        arr[++top] = emp;
        return true;
    }

    bool pop() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return false;
        }
        cout << "Popped Employee: ";
        arr[top--].displayEmp();
        return true;
    }

    void display() const {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack contents :" << endl;
        for (int i = top; i >= 0; i--) {
            arr[i].displayEmp();
        }
    }
};
#endif
