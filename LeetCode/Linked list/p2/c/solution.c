/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *p = dummy;
    int carry = 0;
    while(l1||l2||carry>0){
        int n1 = l1?l1->val:0;
        int n2 = l2?l2->val:0;
        carry += n1+n2;
        struct ListNode *pNew=(struct ListNode*)malloc(sizeof(struct ListNode));
        pNew->val = carry%10;
        pNew->next=NULL;
        carry /= 10;
        p->next = pNew;
        p = pNew;
        l1=l1?l1->next:l1;
        l2=l2?l2->next:l2;
    }
    return dummy->next;
}