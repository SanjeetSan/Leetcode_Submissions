class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        vector<int> Prefix(n);
        Prefix[0] = nums[0];
        cout << Prefix[0] << " ";
        for (int i = 1; i < n; i++) {
            if (Prefix[i - 1] > 0) {
                Prefix[i] = Prefix[i - 1] + nums[i];
            } else {
                Prefix[i] = nums[i];
            }
        }
        return *max_element(Prefix.begin(), Prefix.end());
    }
};