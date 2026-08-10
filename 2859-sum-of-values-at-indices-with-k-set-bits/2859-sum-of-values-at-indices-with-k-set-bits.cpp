class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            int c = 0;
            int temp = i;
            while(temp){
                temp = temp & (temp - 1);
                c++;
            }
            if(c == k){
                sum += nums[i];
            }
        }
        return sum;
    }
};