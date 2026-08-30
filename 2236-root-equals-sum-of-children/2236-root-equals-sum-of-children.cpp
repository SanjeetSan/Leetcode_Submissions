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
    int sum(TreeNode* root, int& child){
        if(root == nullptr){
            return 0;
        }
        int left = sum(root->left, child);
        int right = sum(root->right, child);
        return root->val + left + right;
    }
    bool checkTree(TreeNode* root) {
        int rootval = root->val;
        int child = sum(root, child);
        cout << child;
        return child - rootval == rootval;
    }
};