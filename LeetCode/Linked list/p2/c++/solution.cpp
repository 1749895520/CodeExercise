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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(-1),*p = &dummy;
        int carry = 0;
        while(l1!=nullptr||l2!=nullptr||carry>0){
            int n1 = l1?l1->val:0;
            int n2 = l2?l2->val:0;
            carry += n1+n2;
            p->next = new ListNode(carry%10);
            carry /= 10;
            p = p->next;
            l1=l1?l1->next:l1;
            l2=l2?l2->next:l2;
        }
        return dummy.next;
    }
};