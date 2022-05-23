/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> ans;
        stack<int> value;
        ListNode *p = head;
        while(p!=NULL) {
            value.push(p->val);
            if(p->next==NULL) break;
            p = p->next;
        }
        while(!value.empty()) {
            ans.push_back(value.top());
            value.pop();
        }
        return ans;
    }
};