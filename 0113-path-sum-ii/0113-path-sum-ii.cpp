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
    vector<vector<int>> res;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> CurrPath;
        dfs(root, 0, targetSum, CurrPath);
        return res;
    }
    void dfs(TreeNode* root, int currSum, int targetSum, vector<int>& CurrPath) {
        if (root == nullptr) {
            return;
        }
        if (!root->left and !root->right) {
            if (currSum + root->val == targetSum) {
                CurrPath.push_back(root->val);
                res.push_back(CurrPath);
                CurrPath.pop_back();
                return;
            }
        }
        CurrPath.push_back(root->val);
        dfs(root->left, currSum + root->val, targetSum, CurrPath);
        dfs(root->right, currSum + root->val, targetSum, CurrPath);
        CurrPath.pop_back();
    }
};