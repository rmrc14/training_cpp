/*

class linked list

*/

#include <iostream>
#include <cstdlib>

using namespace std;


class node
{
private:
	int data;
	node* next;
	
public:
	node(){}
	/*node(int d)
	{
		data = d;
		next = nullptr;
	}*/
	node* createNode();
	node* addNodeBeg(node*, node*);
	node* addNodeEnd(node*, node*);
	void displayList(node*);
};

node* node::createNode()
{
	node* nn = new node;
	cout << "enter the value of node :" << endl;
	cin >> nn->data;
	nn->next = nullptr;
	return nn;

}
node* node::addNodeBeg(node* head, node* nn)
{
	if (head == nullptr)
	{
		head = nn;
		return head;
	}
	nn->next = head;
	head = nn;
	return head;

}
node* node::addNodeEnd(node* head, node* nn)
{
	node* temp = head;
	if (head == nullptr)
	{
		head = nn;
		return head;
	}
	while (head->next != nullptr)
	{
		head = head->next;
	}

	head->next = nn;
	head = temp;
	return head;

}
void node::displayList(node* head)
{

	while (head != nullptr)
	{
		cout << head->data << "->";
		head = head->next;

	}
	cout << "NULL" << endl;

}

int dispMenu();

int main()
{
	node* head = nullptr;
	int ch = 1;
	while (ch)
	{
		switch (dispMenu())
		{
		case 1:
			head = addNodeBeg(head, createNode());

			break;
		case 2:
			head = addNodeEnd(head, createNode());
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







