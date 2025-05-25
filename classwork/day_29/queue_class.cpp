/*
	create a class for queue

*/
#include <iostream>
using namespace std;

class Queue {
    int* arr;
    int MAX;
    int front;
    int rear;

public:
    Queue(int size);
    ~Queue();              // Destructor to free memory
    int enqueue(int);
    int dequeue();
    void display() const;
};

Queue::Queue(int size) {  //constructor
    MAX = size;
    arr = new int[MAX];
    front = 0;
    rear = 0;
}

Queue::~Queue() {         //destructor
    delete[] arr;
}

int Queue::enqueue(int v) {
    if (rear == MAX) {
        cout << "Queue is full" << endl;
        return -1;
    }
    arr[rear++] = v;
    return 0;
}

int Queue::dequeue() {
    if (front == rear) {
        cout << "Queue is empty" << endl;
        return -1;//EXIT_FAILURE
    }
    cout << "Dequeued: " << arr[front++] << endl;
    return 0;
}

void Queue::display() const {
    if (front == rear) {
        cout << "Queue is empty" << endl;
        return;  //void
    }

    cout << "Queue contents: ";
    for (int i = front; i < rear; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);  // Will show "Queue is full"

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    return 0;
}
