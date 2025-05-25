
/*

---------------------   class employee and class stack --------------------

*/

#include <iostream>
#include <string>
#include "Stack.h"
#include "Employee.h"



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
