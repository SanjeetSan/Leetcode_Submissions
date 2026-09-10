class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> Merged;
        vector<int> Prev = intervals[0];

        for (int i = 0; i < intervals.size(); i++) {
            vector<int> Curr = intervals[i];
            if (Curr[0] <= Prev[1]) {
                Prev[1] = max(Curr[1], Prev[1]);
            } else {
                Merged.push_back(Prev);
                Prev = Curr;
            }
        }
        Merged.push_back(Prev);
        return Merged;
    }
};