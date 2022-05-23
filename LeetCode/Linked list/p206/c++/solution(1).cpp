/*  ÄæÐò¸³Öµ·¨  */
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
    ListNode* reverseList(ListNode* head) {
        stack<int> val;
        ListNode *p1 = head,*p2 = head;
        while(p1!=nullptr){
            val.push(p1->val);
            p1 = p1->next;
        }
        while(p2!=nullptr){
            p2->val = val.top();
            p2 = p2->next;
            val.pop();
        }
        return head;
    }
};