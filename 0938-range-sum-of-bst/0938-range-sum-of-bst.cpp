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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == nullptr){
            return 0;
        }
        int currentSum = 0;
        if (root->val >= low && root->val <= high) {
            currentSum += root->val;
        }
        currentSum += rangeSumBST(root->left, low, high);
        currentSum += rangeSumBST(root->right, low, high);
        return currentSum;
    }
};