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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *p = head,*p1 = new ListNode();
        stack<int> list;
        int n = 0;
        while(++n<=right){
            if(n==left){
                p1 = p;
            }
            if(n>=left){
                list.push(p->val);
            }
            p = p->next;
        }
        n -= left;
        while(n--){
            p1->val = list.top();
            list.pop();
            p1 = p1->next;
        }
        return head;
    }
};