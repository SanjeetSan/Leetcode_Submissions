class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0, l = 0;
        map<char, int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
            while(mp[s[i]] >= 2){
                mp[s[l]]--;
                l++;
            }
            ans = max(ans, i+1 - l);
        }
        return ans;
    }
};