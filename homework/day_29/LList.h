#ifndef __LLIST__
#define __LLIST__

#include <iostream>
#include "Node.h"
using namespace std;

// ---------------- class for linking the nodes & operations------------

// Linked List class
class LList {
private:
    Node* head;    // this is the external pointer pointing and connecting all the nodes 

public:
    LList() {
        head = nullptr;
    }

    // Add functions
    Node* addBeg(int val);
    Node* addEnd(int val);
    Node* addAfterValue(int key, int val);

    Node* addAfterIndex(int index, int val);
//one more function to add after searched index value then after it

    // Delete functions
    Node* deleteBeg();
    Node* deleteEnd();
    Node* deleteValue(int val);

    // search & display
    void search(int val) const;
    void display() const;

    // Get current head -- get the current head pointed value
    Node* getHead() const {
        return head;
    }
};

// ----------------------  add ->  Definitions -----------------------

Node* LList::addBeg(int val)
{
    //cout << "adding at the beginning:\n";
    Node* newNode = new Node(val);
    newNode->next = head;   
    head = newNode;
    return head;
}

Node* LList::addEnd(int val)   // here we have to iterate through the entire list to find the end
{                              // future -- create a pointer that point to the end or bottom or tail
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return head;
    }

    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

Node* LList::addAfterValue(int key, int val)
{
    Node* temp = head;
    // here looks for the value
    while (temp != nullptr && temp->data != key)
    {
        temp = temp->next;
    }
    // here after while loop if its pointed to a nullptr that means we havent found the value
    if (temp == nullptr) 
    {
        cout << "Value " << key << " not found in the list.\n";
        return head;
    }
    // if found the value after while loop -- now  the temp is pointed to the value
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}


//--------------------------  delete defnitions ---------------


Node* LList::deleteBeg()
{
    if (head == nullptr)   // check wether its empty or not
    {
        cout << "List is empty.\n";
        return head;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

Node* LList::deleteEnd()
{
    if (head == nullptr)
    {
        cout << "List is empty.\n";
        return head;
    }

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return head;
    }

    Node* temp = head;
    while (temp->next->next != nullptr)  // here confirming wether its  last node scince its next point null
    {
        temp = temp->next;  // temp is second last node
    }

    delete temp->next;  // deletes the next node i.e the last node  
    temp->next = nullptr;  //then changes the next pointer to point the null so it becomes the last node

    return head;
}

Node* LList::deleteValue(int val)
{
    if (head == nullptr) 
    {
        cout << "List is empty.\n";
        return head;
    }

    if (head->data == val)   // if found in the begining 
    {
        return deleteBeg();
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != val) 
    {
        temp = temp->next;
    }

    if (temp->next == nullptr) 
    {
        cout << "Value " << val << " not found.\n";
        return head;
    }

    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;

    return head;
}

// ----------------------- search & display ------------------


void LList::search(int val) const 
{
    Node* temp = head;
    int pos = 1;
    while (temp != nullptr) {
        if (temp->data == val) {
            cout << "Value " << val << " found at position " << pos << ".\n";
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Value " << val << " not found in the list.\n";
}

void LList::display() const {

    if (head == nullptr) 
    {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// after search index add value   --- need to check

//Node* LList::addAfterIndex(int index, int val)
//{
//    if (index < 0) 
//    {
//        cout << "Invalid index.\n";
//        return head;
//    }
//
//    Node* temp = head;
//    int count = 0;
//
//    while (temp != nullptr && count < index)
//    {
//        temp = temp->next;
//        count++;
//    }
//
//    if (temp == nullptr) 
//    {
//        cout << "Index " << index << " is out of bounds.\n";
//        return head;
//    }
//
//    Node* newNode = new Node(val);
//    newNode->next = temp->next;
//    temp->next = newNode;
//
//    return head;
//}




#endif