#include <iostream>
#include <string>
using namespace std;

// ------------------- Employee Class -------------------
class Employee {
    static int emp_id_counter;
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

    ~Stack() {         //destructor
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
        if (top == -1) {    //-1 is used instead of bottom variable name just gave the variable val directly
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack contents :" << endl;
        for (int i = top; i >= 0; i--) {
            arr[i].displayEmp();
        }
    }
};

// ------------------- Main -------------------
int main() {
    Stack s(3);

    Employee e1("abc1");
    Employee e2("abc2");
    Employee e3("abc3");
    Employee e4("abc4");

    s.push(e1);
    s.push(e2);
    s.push(e3);
    s.push(e4); // Will show "Stack is full"

    s.display();

    s.pop();
    s.display();

    return 0;
}
