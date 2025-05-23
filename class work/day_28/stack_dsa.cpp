/*
filo
lifo

     STACK
*/

#include<iostream>
#define MAX 5
using namespace std;

int top = -1;
int bottom = -1;
int arr[MAX];
int push(int);
int pop();
void display();


int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    display();
    pop();
    display();
    pop();
    pop();
    pop();
    pop();
    pop();


    return 0;
    
}

int push(int v)
{
    if (top == MAX-1)
    {
        cout << "stack is full" << endl;
        return 0;
    }
    top++;
    arr[top] = v;
    
    return 0;

}
int pop()
{
    if(top==bottom)
    {
        cout << "the stack is empty:" << endl;
        return 0;
    }
    cout<<"popped: " << arr[top] <<endl;
    top--;
    return 0;
}

void display()
{
    if(top==bottom)
        cout << "the stack is empty:" << endl;

    for (int i = top;i >= 0;i--)
    {
        cout << arr[i]<<" " << endl;
    }
}