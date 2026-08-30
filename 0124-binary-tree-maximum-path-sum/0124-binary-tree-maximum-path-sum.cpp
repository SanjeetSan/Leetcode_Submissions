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
    int findsum(TreeNode* root, int& maxsum){
        if(root == nullptr){
            return 0;
        }
        int left = max(0, findsum(root->left, maxsum));
        int right = max(0, findsum(root->right, maxsum));
        maxsum = max(maxsum, left + right + root->val);
        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        int maxsum = -123456789;
        // while(root != nullptr){
            findsum(root, maxsum);
        // }   
        return maxsum;
    }
};