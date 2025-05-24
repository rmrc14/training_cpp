/*
	create a class for stack

*/
#include <iostream>

using namespace std;

class Stack {
	int* arr;
	int top;
	int bottom;
	int MAX;

public:
	Stack(int);
	int push(int);
	int pop();
	void display()const;
};

Stack::Stack(int size)
{
	MAX = size;
	arr = new int[MAX];
	top = -1;
	bottom = -1;


}
int Stack::push(int v)
{
	if (top == MAX - 1)
	{
		cout << "stack is full" << endl;
		return 0;
	}
	top++;
	arr[top] = v;

	return 0;
}
int Stack::pop()
{
	if (top == bottom)
	{
		cout << "the stack is empty:" << endl;
		return 0;
	}
	cout << "popped: " << arr[top] << endl;
	top--;
	return 0;
}
void Stack::display()const
{
	if (top == bottom)
		cout << "the stack is empty:" << endl;

	for (int i = top;i >= 0;i--)
	{
		cout << arr[i] << " " << endl;
	}
}

int main()
{
	Stack s(5);

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.display();
	s.pop();
	s.display();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();


	return 0;
}