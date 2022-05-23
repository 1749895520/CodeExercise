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
    // 中序遍历
    void order(vector<int> &val,TreeNode* root,int deep) {
        if(root->left!=nullptr) {
            order(val,root->left,deep+1);
        }
        val.push_back(root->val+deep);
        if(root->right!=nullptr) {
            order(val,root->right,deep+1);
        }
    }
    bool isSymmetric(TreeNode* root) {
        vector<int> val;
        order(val,root,1);
        if(val.size()%2==0) return false;
        for(int left = 0,right = val.size()-1;left<right;left++,right--) {
            if(val[left]!=val[right]) {
                return false;
            }
        }
        return true;
    }
};