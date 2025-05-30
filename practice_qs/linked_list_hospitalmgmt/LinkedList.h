#pragma once
#include "Node.h"
using namespace std;
//#include "LinkedList"  // Template implementations
template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList();
    ~LinkedList();

    void push_back(const T& val);
    void push_front(const T& val);
    bool removeById(int id);
    T* findById(int id);
    void display() const;
    bool isEmpty() const;
};


template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template <typename T>
LinkedList<T>::~LinkedList() {
    while (head != nullptr) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

template <typename T>
void LinkedList<T>::push_back(const T& val) {
    Node<T>* newNode = new Node<T>(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node<T>* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

template <typename T>
void LinkedList<T>::push_front(const T& val) {
    Node<T>* newNode = new Node<T>(val);
    newNode->next = head;
    head = newNode;
}

template <typename T>
bool LinkedList<T>::removeById(int id) {
    if (!head) return false;

    if (head->data.id == id) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    Node<T>* prev = head;
    Node<T>* curr = head->next;

    while (curr) {
        if (curr->data.id == id) {
            prev->next = curr->next;
            delete curr;
            return true;
        }
        prev = curr;
        curr = curr->next;
    }
    return false;
}

template <typename T>
T* LinkedList<T>::findById(int id) {
    Node<T>* temp = head;
    while (temp) {
        if (temp->data.id == id) {
            return &(temp->data);
        }
        temp = temp->next;
    }
    return nullptr;
}

template <typename T>
void LinkedList<T>::display() const {
    Node<T>* temp = head;
    while (temp) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
    return head == nullptr;
}
