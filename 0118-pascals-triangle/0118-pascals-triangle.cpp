class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        pascal.push_back({1});
        if(numRows == 1){
            return pascal;
        }
        pascal.push_back({1, 1});
        if(numRows == 2){
            return pascal;
        }
        // int c = 1;
        for (int i = 2; i < numRows; i++) {
            vector<int> currRow;
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    currRow.push_back(1);
                }
                else{
                    currRow.push_back(pascal[i -1][j] + pascal[i - 1][j - 1]);
                }
            }
            pascal.push_back(currRow);
        }
        return pascal;
    }
};