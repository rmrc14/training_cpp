#pragma once
#include "Node.h"
class LList
{
private :
	Node* head;

public:
	LinkedList() {

		head = nullptr;
	}
	//LinkedList(int) {}

	int addBeg(int);
	int addEnd(int);
	void display();

};