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
    int maxDeep = 0;
    void lOrder(unordered_map<int,vector<int>> &level, TreeNode* root,int n) {
        level[n].push_back(root->val);
        maxDeep = max(maxDeep,n);
        if(root->left!=nullptr) {
            lOrder(level,root->left,n+1);
        }
        if(root->right!=nullptr) {
            lOrder(level,root->right,n+1);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        unordered_map<int,vector<int>> level;
        lOrder(level,root,0);
        ans.resize(maxDeep+1);
        for(int i=0;i<=maxDeep;i++) {
            for(int val:level[i]) {
                ans[i].push_back(val);
            }
        }
        return ans;
    }
};