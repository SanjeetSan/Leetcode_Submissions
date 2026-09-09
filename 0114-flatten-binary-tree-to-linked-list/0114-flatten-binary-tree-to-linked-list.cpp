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
    vector<int> preOrder;
    void preOrderTraversal(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        preOrder.push_back(root->val);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
    void buildOnlyInRight(TreeNode* root, int index, int n) {
        if (index > n) {
            return;
        }
        root->right = new TreeNode(preOrder[index]);
        buildOnlyInRight(root->right, ++index, n);
    }
    void flatten(TreeNode* root) {
        preOrderTraversal(root);
        if (root != nullptr) {
            root->left = nullptr;
            root->right = nullptr;
        }
        buildOnlyInRight(root, 1, preOrder.size() - 1);
    }
};