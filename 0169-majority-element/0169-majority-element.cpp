class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mid = nums.size() / 2;
        map<int, int> mp;
        for(int n : nums){
            mp[n]++;
        }
        for(auto it : mp){
            if(it.second > mid){
                return it.first;
            }
        }
        return -1;
    }
};