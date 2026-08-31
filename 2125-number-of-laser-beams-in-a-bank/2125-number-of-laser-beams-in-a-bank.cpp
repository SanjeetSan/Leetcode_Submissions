class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 1;
        int n = bank.size();
        vector<int> rows;
        for(int i = n - 1; i >= 0; i--){
            string curr = bank[i];
            int rowone = 0;
            for(int j = 0; j < curr.size(); j++){
                if(curr[j] == '1'){
                    rowone++;
                }
            }
            if(rowone != 0){
                rows.push_back(rowone);
            }
        }
        for(int i = 1; i < rows.size(); i++){
            ans += rows[i] * rows[i - 1]; 
        }
        return ans - 1;
    }
};