class Solution {
public:
    int rob(vector<int>& nums) {
        int Prev = 0, Prev1 = nums[0];
        for(int i = 1; i < nums.size(); i++){
            int Curr = max( Prev1, (Prev + nums[i]));
            Prev = Prev1;
            Prev1 = Curr;
        }
        return Prev1;
    }
};