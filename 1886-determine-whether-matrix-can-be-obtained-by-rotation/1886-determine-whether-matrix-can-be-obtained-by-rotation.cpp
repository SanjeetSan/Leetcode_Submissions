class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        int m = mat[0].size();
        bool flag = true;
        for(int rotation = 0; rotation < 4; rotation++){
            if(mat == target){
                return true;
            }
            for(int row = 0; row < n; row++){
                for(int col = row + 1; col < m; col++){
                    swap(mat[row][col], mat[col][row]);
                }
            }
            reverse(mat.begin(), mat.end());
        }
        return false;
    }
};