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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ZigZag;
        if(root == nullptr){
            return ZigZag;
        }
        queue<TreeNode*> levels;
        bool check = false;
        levels.push(root);
        while(!levels.empty()){
            int size = levels.size();
            vector<int> Levels;
            for(int i = 0; i < size; i++){
                TreeNode* curr = levels.front();
                levels.pop();
                if(curr->left){
                    levels.push(curr->left);
                }
                if(curr->right){
                    levels.push(curr->right);
                }
                Levels.push_back(curr->val);
            }
            if(check){
                reverse(Levels.begin(), Levels.end());
            }
            ZigZag.push_back(Levels);
            check = !check;
        }
        return ZigZag;
    }
};