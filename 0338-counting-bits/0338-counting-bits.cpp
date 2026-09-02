class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> NoOfOnes;
        for(int curr = 0; curr <= n; curr++){
            int totalOnes = 0;
            int tempOfCurr = curr;
            while(tempOfCurr > 0){
                tempOfCurr = tempOfCurr & (tempOfCurr - 1);
                totalOnes++;
            }
            NoOfOnes.push_back(totalOnes);
        }
        return NoOfOnes;
    }
};