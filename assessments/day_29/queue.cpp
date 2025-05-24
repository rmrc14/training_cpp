/*
	create a class for queue

*/

#include <iostream>
using namespace std;

#define MAX 5

int arr[MAX];
int front = 0;
int rear = 0;

int enqueue(int v) {
    if (rear == MAX) {
        cout << "Queue is full" << endl;
        return -1;
    }
    arr[rear++] = v;
    return 0;
}

int dequeue() {
    if (front == rear) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    cout << "Dequeued: " << arr[front++] << endl;
    return 0;
}

void display() {
    if (front == rear && front==MAX-1) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue contents: ";
    for (int i = front; i < rear; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // OK
    enqueue(60); // Will print "Queue is full"

    display();

    dequeue();
    dequeue();

    display();

    return 0;
}
