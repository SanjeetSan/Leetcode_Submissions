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
    int count = 0, sum = 0, totalCount = 0;
    void CountAverage(TreeNode* root){
        if(root == nullptr){
            return ;
        }
        count++;
        sum += root->val;
        CountAverage(root->left);
        CountAverage(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        count = 0, sum = 0;
        CountAverage(root);
        if(sum / count == root->val){
            totalCount++;
        }   
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return totalCount;
    }
};