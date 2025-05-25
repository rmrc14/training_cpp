/*

      ----------------linked list optimized------------

  MENU:
  1. AddNodeBeg
  2. AddNodeEnd
  3. DisplayList
  4. Exit

*/

#include <iostream>

using namespace std;

typedef struct node 
{
    int data;
    struct node* next;


}NODE;


void displayList(NODE*);

int addNodeBeg(NODE*,NODE*);
int AddNodeEnd(NODE*,NODE*);



int main()
{
    NODE* nn = nullptr, * head = nullptr, * temp = nullptr;

    int ch = 1;

    while (ch)
    {
        nn = new NODE(); // constructor (if any) will be called
        cout << "enter the value of node :" << endl;
        cin >> nn->data;
        nn->next = nullptr;
        if (head == nullptr)  // if => only meant for the first node of the list
        {
            addNodeBeg(head,nn);

        }
        else
        {
           
            AddNodeEnd(head, nn);

        }
        cout << "do you want to add new node (0/1):";
        cin >> ch;
    }

   // head = temp;  //head is again pointed to the first node

    displayList(head);


    return 0;
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


int addNodeBeg(NODE* head,NODE* nn)
{

    //empty list
    head = nn;
   // temp = nn;

}




int AddNodeEnd(NODE* head, NODE* nn)
{
    head->next = nn;
    head = head->next; //make a relationship


}
