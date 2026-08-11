class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int currentSum = 0;
        currentSum += nums[0];
        int i = 1;
        while(i < nums.size() && nums[i] == nums[i - 1] + 1){
            currentSum += nums[i];
            i++;
        }
        while(find(nums.begin(), nums.end(), currentSum) != nums.end()){
            currentSum++;
        }
        return currentSum;
    }
};