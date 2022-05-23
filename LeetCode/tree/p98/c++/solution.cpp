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
    void midOrder(TreeNode* root,vector<int> &tree) {
        if(root->left!=nullptr) {
            midOrder(root->left,tree);
        }
        tree.push_back(root->val);
        if(root->right!=nullptr) {
            midOrder(root->right,tree);
        }
    }
    bool isValidBST(TreeNode* root) {
        vector<int> tree;
        midOrder(root,tree);
        for(int i=1;i<tree.size();i++) {
            if(tree[i-1]>=tree[i]) {
                return false;
            }
        }
        return true;
    }
};