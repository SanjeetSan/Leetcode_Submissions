class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> smp;
        for(auto c : s){
            smp[c]++;
        }
        map<char, int> tmp;
        for(auto c : t){
            tmp[c]++;
        }
        return smp == tmp;
    }
};