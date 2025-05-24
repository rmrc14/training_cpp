
/*
			LINEAR LINKED LIST  (	non optimized implementation	)
	
*/


#include<iostream>

using namespace std;

struct node {

	int v;
	struct node* ptr;

};



int main()
{

	//Step 1: allocating the memory for different node

	struct node n1, n2, n3;

	cout << sizeof(n1)<<"address: "<<(unsigned long int)&n1<<endl;
	cout << sizeof(n2) << "address: " << (unsigned long int) & n2<<endl;
	cout << sizeof(n3) << "address: " << (unsigned long int) & n3<<endl;


	//Step 2: initialize value for all the nodes
	n1.v = 10;
	n1.ptr = nullptr;

	n2.v = 20;
	n2.ptr = nullptr;

	n3.v = 30;
	n3.ptr = nullptr;

	cout << "n1 value: " << n1.v << "\ptr: " << (unsigned long int) n1.ptr << endl;
	cout << "n2 value: " << n2.v << "\ptr: " << (unsigned long int) n2.ptr << endl;
	cout << "n3 value: " << n3.v << "\ptr: " << (unsigned long int) n3.ptr << endl;
	// Step 3: make a relationship
	n1.ptr = &n2;
	n2.ptr = &n3;
	n3.ptr = NULL;
	cout << "=============================\n";
	cout << "n1 value: " << n1.v << "\ptr: " << (unsigned long int) n1.ptr << endl;
	cout << "n2 value: " << n2.v << "\ptr: " << (unsigned long int) n2.ptr << endl;
	cout << "n3 value: " << n3.v << "\ptr: " << (unsigned long int) n3.ptr << endl;

	// Step 4: traversing in the list
	struct node* head = &n1;   // n1 => BA of the list

	while (head != nullptr)
	{
		cout << head->v << "->";  
		head = head->ptr;         //be careful placing the pointer
		
	}
	cout << "null" << endl;

	/*
	cout << n1.v << endl;
	cout << head->v << endl;


	//head = &n2;
	head = head->ptr;
	cout << head->v << endl;*/


	// add node n4 btw 2 nodes
	struct node n4;
	n4.ptr = nullptr;
	n4.v = 40;

	n1.ptr = &n4;
	n4.ptr = &n2;

	head = &n1;
	while (head != nullptr)
	{
		cout << head->v << "->";
		head = head->ptr;         //be careful placing the pointer

	}
	cout << "null" << endl;


	// add node n5 in start nodes
	struct node n5;
	n5.ptr = nullptr;
	n5.v = 50;


	n5.ptr = &n1;
	n1.ptr = &n2;
	

	head = &n5;
	while (head != nullptr)
	{
		cout << head->v << "->";
		head = head->ptr;         //be careful placing the pointer

	}
	cout << "null" << endl;


	// add node n6 in end nodes
	struct node n6;
	n6.ptr = nullptr;
	n6.v = 60;


	
	n3.ptr = &n6;


	head = &n5;
	while (head != nullptr)
	{
		cout << head->v << "->";
		head = head->ptr;         //be careful placing the pointer

	}
	cout << "null" << endl;




	return 0;
}