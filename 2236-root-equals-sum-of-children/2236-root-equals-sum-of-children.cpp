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
    int sum(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int left = sum(root->left);
        int right = sum(root->right);
        return root->val + left + right;
    }
    bool checkTree(TreeNode* root) {
        int rootval = root->val; 
        // cout << child;
        return sum(root) - rootval == rootval;
    }
};