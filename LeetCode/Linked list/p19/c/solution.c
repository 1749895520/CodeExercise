/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode *p1=dummy,*p2=dummy;
    for(int i=0;i<n;i++){
        p1 = p1->next;
    }
    while(p1->next){
        p1 = p1->next;
        p2 = p2->next;
    }
    p2->next = p2->next->next;
    return dummy->next;
}