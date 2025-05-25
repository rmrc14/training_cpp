/*

search update delete

delete end ,beg ,btw
add btw

search for a particular value then add after it

*/


#include <iostream>
#include <cstdlib>

using namespace std;


typedef struct node
{
	int data;
	struct node* next;
}NODE;

NODE* createNode();
NODE* addNodeBeg(NODE*, NODE*);
NODE* addNodeEnd(NODE*, NODE*);
void displayList(NODE*);

int dispMenu();

int main()
{
	NODE* head=nullptr;
	int ch = 1;
	while (ch)
	{
		switch (dispMenu())
		{
		case 1:
			head=addNodeBeg(head, createNode());

			break;
		case 2:
			head= addNodeEnd(head, createNode());
			break;
		case 3:
			displayList(head);
			break;
		case 4:
			ch = 0;
			break;
		default:
			cout << "Something went wrong" << endl;
		}
	}

	cout << "Exiting program...." << endl;
	return 0;
}


int dispMenu()
{
	int ch;
	cout << "\tPress,\n\t1. Add Node Begining\n\t2. Add Node End\n";
	cout << "\t3. Display List\n\t4. Exit..\n\tChoice: ";
	cin >> ch;
	return ch;
}


NODE* createNode()
{

	NODE *nn = new NODE;
	cout << "enter the value of node :" << endl;
	cin >> nn->data;
	nn->next = nullptr;
	return nn;
}

NODE* addNodeBeg(NODE* head, NODE* nn)
{
	if (head==nullptr)
	{
		head = nn;
		return head;
	}
	nn->next = head;
	head = nn;
	return head;

}

NODE* addNodeEnd(NODE* head, NODE* nn)
{
	NODE* temp = head;
	if (head == nullptr)
	{
		head = nn;
		return head;
	}
	while(head->next!=nullptr)
	{
		head = head->next;
	}

	head->next = nn;
	head = temp;
	return head;
	
}

void displayList(NODE* head)
{

	while (head != nullptr)
	{
		cout << head->data << "->";
		head = head->next;

	}
	cout << "NULL" << endl;

}