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
    void postTra(TreeNode* root,vector<int> &ans) {
        if(root->left!=nullptr) {
            postTra(root->left,ans);
        }
        if(root->right!=nullptr) {
            postTra(root->right,ans);
        }
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr) return ans;
        postTra(root,ans);
        return ans;
    }
};