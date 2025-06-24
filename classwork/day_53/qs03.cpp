#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool hasKNodes(Node* head, int K) {
    int count = 0;
    while (head && count < K) {
        head = head->next;
        count++;
    }
    return count == K;
}

Node* ReverseKGroup(Node* head, int K) {
    if (!head || K <= 1)
        return head;

    Node* curr = head;
    Node* prev = nullptr;
    Node* next = nullptr;

    if (!hasKNodes(curr, K))
        return head;

    int count = 0;
    while (curr && count < K) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    head->next = ReverseKGroup(curr, K);
    return prev;
}


// -------------------------------------------------
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

int main() {
    Node* head = createNode(1);
    Node* curr = head;
    for (int i = 2; i <= 8; ++i) {
        curr->next = createNode(i);
        curr = curr->next;
    }

    int K = 3;
    cout << "Original List:\n";
    printList(head);

    head = ReverseKGroup(head, K);

    cout << "List after reversing every " << K << " nodes:\n";
    printList(head);

    return 0;
}
