class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> Replaced;
        int Mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int ans = 0;
            int n = nums[i];
            while (n) {
                ans += n % 10;
                n /= 10;
            }
            Mini = min(ans, Mini);
        }
        return Mini;
    }
};