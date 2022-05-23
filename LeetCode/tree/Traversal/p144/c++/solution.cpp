/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preTra(TreeNode* root,vector<int> &ans) {
        ans.push_back(root->val);
        if(root->left!=nullptr) {
            preTra(root->left,ans);
        }
        if(root->right!=nullptr) {
            preTra(root->right,ans);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr) return ans;
        preTra(root,ans);
        return ans;
    }
};