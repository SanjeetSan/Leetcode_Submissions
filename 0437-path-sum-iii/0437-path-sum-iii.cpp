/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int findPossiblePaths(TreeNode* root, long long CurrSum, int targetSum) {
        if (root == nullptr) {
            return 0;
        }
        int TotalPaths = 0;
        CurrSum += root->val;
        if (CurrSum == targetSum) {
            TotalPaths++;
        }
        TotalPaths += findPossiblePaths(root->left, CurrSum, targetSum);
        TotalPaths += findPossiblePaths(root->right, CurrSum, targetSum);
        return TotalPaths;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return 0;
        }
        long long CurrSum = 0;
        int roott = findPossiblePaths(root, CurrSum, targetSum);
        int lefty = pathSum(root->left, targetSum);
        int righty = pathSum(root->right, targetSum);
        return roott + lefty + righty;
    }
};