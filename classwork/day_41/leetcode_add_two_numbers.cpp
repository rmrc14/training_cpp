
// -------------- trial version----------------

#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Solution class with addTwoNumbers method
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);               // Dummy node to simplify result list
        ListNode* tail = &dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;

            int sum = val1 + val2 + carry;
            carry = sum / 10;

            tail->next = new ListNode(sum % 10);
            tail = tail->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy.next;
    }
};

// Helper function to create a linked list from array
ListNode* createList(const vector<int>& nums) 
{
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int num : nums) {
        if (!head) 
        {
            head = new ListNode(num);
            tail = head;
        }
        else 
        {
            tail->next = new ListNode(num);
            tail = tail->next;
        }
    }

    return head;
}

// Helper function to print a linked list
void printList(ListNode* head) 
{
    while (head != nullptr) 
    {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() 
{
    // Example: l1 = [2,4,3], l2 = [5,6,4]
    vector<int> l1_values = { 2, 4, 3 };
    vector<int> l2_values = { 5, 6, 4 };

    ListNode* l1 = createList(l1_values);
    ListNode* l2 = createList(l2_values);

    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(result);

    return 0;
}
