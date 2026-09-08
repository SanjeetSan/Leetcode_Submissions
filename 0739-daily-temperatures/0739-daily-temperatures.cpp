class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for (int i = 0; i < n; i++) {
        // for (int i = n - 1; i >= 0; i--) {
            while(!st.empty() && temp[i] > temp[st.top()]){
                int index = st.top();
                st.pop();
                ans[index] = i - index;
            }
            st.push(i);
        }
        return ans;
    }
};