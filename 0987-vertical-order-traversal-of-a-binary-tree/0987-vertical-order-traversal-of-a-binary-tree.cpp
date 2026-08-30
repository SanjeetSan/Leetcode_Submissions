// #include<bits/stdc++.h>
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, map<int,int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> todo;
        todo.push({root, {0, 0}});
        while (!todo.empty()) {
            auto p = todo.front();
            todo.pop();
            TreeNode* curr = p.first;
            // cout << curr << " ";
            int x = p.second.first;
            int y = p.second.second;
            nodes[x][y][curr->val]++;
            if (curr->left != nullptr) {
                todo.push({curr->left, {x - 1, y + 1}});
            }
            if (curr->right != nullptr) {
                todo.push({curr->right, {x + 1, y + 1}});
            }
        }
        //iterate column -> row -> values <-> if multiple values then store it in asc order
        vector<vector<int>> ans;
        for (auto p : nodes) { 
            vector<int> columns;
            for (auto q : p.second) {
                for (auto r : q.second) {
                    int val = r.first;
                    int co = r.second;
                    // cout << co << " ";
                    while(co--){
                        columns.push_back(val);
                    }
                }
            }
            ans.push_back(columns);
        }
        return ans;
    }
};