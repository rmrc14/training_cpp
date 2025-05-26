#pragma once

class Node
{
private:
	int data;
	Node* next;
public:
	Node(int d = 0)
	{
		next = nullptr;
		data = d;
	}
	int getData();
	int setData(int);
	Node* getNext();
	void setNext(Node*);
};
void Node::setNext(Node* newNode)
{
	next = newNode;

}

Node* Node::getNext()
{
	return next;
}

int Node::getData()
{
	return data;
}
int Node::setData(int v)
{
	return data = v;
}