class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int>mp;
        for(int i = 0; i < edges.size(); i++){
            for(int j = 0; j < edges[0].size(); j++){
                mp[edges[i][j]]++;
            }
        }
        for(auto m: mp){
            if(m.second >= 2){
                return m.first;
            }
        }
        return 0;
    }
};