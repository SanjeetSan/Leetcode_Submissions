class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int, int> mp;
        for(int n : nums){
            mp[n]++;
        }
        vector<pair<int, int>>freq;
        for(auto f : mp){
            freq.push_back({f.second, f.first});
        }
        sort(freq.rbegin(), freq.rend());
        for(int i = 0; i < k; i++){
            res.push_back(freq[i].second);
        }
        return res;
    }
};