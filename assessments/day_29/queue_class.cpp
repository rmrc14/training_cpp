/*
	create a class for queue

*/
#include <iostream>

using namespace std;

class Queue {
	int* arr;
	int MAX;
	int front = 0;
	int rear = 0;

public:
	Queue(int);
	int enqueue(int);
	int dequeue();
	void display()const;
};

Queue::Queue(int size)
{
	MAX = size;
	arr = new int[MAX];
	front = 0;
	rear = 0;


}
int Queue::enqueue(int v)
{
	if (rear == MAX) {
		cout << "Queue is full" << endl;
		return -1;
	}
	arr[rear++] = v;
	return 0;
}
int Queue::dequeue()
{
	if (front == rear) {
		cout << "Queue is empty" << endl;
		return -1;
	}
	cout << "Dequeued: " << arr[front++] << endl;
	return 0;
}
void Queue::display()const
{
	if (front == rear && front == MAX - 1) {
		cout << "Queue is empty" << endl;
		return;
	}

	cout << "Queue contents: ";
	for (int i = front; i < rear; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	Queue q(5);

	


	return 0;
}