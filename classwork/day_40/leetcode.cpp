/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int carry = 0;
        ListNode dummy(0);
        ListNode* head = &dummy; //

        while (l1 != nullptr || l2 != nullptr || carry > 0)
        {
            //int a=l1!=nullptr?l1->val:0;
            int a, b;

            if (l1 != nullptr)
            {
                a = l1->val;
            }
            else
                a = 0;
            if (l2 != nullptr)
                b = l2->val;
            else
                b = 0;
            int sum = a + b + carry;
            carry = sum / 10; // gets the carry if its 2 digits
            head->next = new ListNode(sum % 10); // adding the number to a new node
            head = head->next;
            if (l1 != nullptr)
                l1 = l1->next;
            if (l2 != nullptr)
                l2 = l2->next;
        }
        return dummy.next;
    }
};