/*  µü´ú·¨  */
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
        ListNode *head_ = NULL,*p1 = head;
        while(p1){
            ListNode *p2 = p1->next;
            p1->next = head_;
            head_ = p1;
            p1 = p2;
        }
        return head_;
    }
};