#ifndef __NODE__
#define __NODE__

#include <iostream>
#include "LList.h"
using namespace std;


//   --------- class for creating nodes for linked list-----------

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};


#endif
