class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expect = n * (n + 1) / 2;
        int got = 0;
        for(int n : nums){
            got += n;
        }
        return expect - got;
    }
};