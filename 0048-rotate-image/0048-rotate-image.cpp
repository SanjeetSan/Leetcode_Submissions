class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();
        //Approach -> Transpose -> reverse every columns

        //Step - 1: Transpose
        for(int row = 0; row < size; row++){
            for(int col = row + 1; col < size; col++){
                swap(matrix[col][row], matrix[row][col]);
            }
        }

        //Step - 2: Reverse Rows
        for(int row = 0; row < size; row++){
            reverse(matrix[row].begin(), matrix[row].end());
        }
    }
};