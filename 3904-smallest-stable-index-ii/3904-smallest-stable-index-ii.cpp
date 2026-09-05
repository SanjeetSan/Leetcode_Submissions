class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int indx = 1; indx < n; indx++){
            prefix[indx] = max(prefix[indx - 1], nums[indx]);
        }

        vector<int> suffix(n);
        suffix[n - 1] = nums[n - 1];
        for(int indx = n - 2; indx >= 0; indx--){
            suffix[indx] = min(suffix[indx + 1], nums[indx]);
        }

        for(int indx = 0; indx < n; indx++){
            if(prefix[indx] - suffix[indx] <= k){
                return indx;
            }
        }
        
        return -1;
    }
};