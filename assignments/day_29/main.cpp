#include <iostream>
#include "LList.h"
#include "Node.h"
using namespace std;

//                  ------------------- Main -----------------

int main() {
    LList list;

    list.addBeg(10);
    list.addBeg(5);
    list.addEnd(20);
    list.addEnd(25);

    list.display();

    list.addAfterValue(10, 15);
    list.display();

    list.search(15);
    list.search(30);

   // list.addAfterIndex(2, 99);  // Adds value 99 after index 2

    list.deleteBeg();
    list.deleteEnd();
    list.display();

    list.deleteValue(15);
    list.display();

    list.deleteValue(100); // not found




    return 0;
}
