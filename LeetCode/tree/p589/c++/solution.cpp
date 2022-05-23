/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preOrder(Node* root, vector<int> &ans) {
        if(root == nullptr) {
            return;
        }
        ans.emplace_back(root->val);
        for(Node* n : root->children) {
            preOrder(n,ans);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        preOrder(root,ans);
        return ans;
    }
};