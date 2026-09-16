class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        int m = arr1.size(), n = arr2.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr1[j] == arr2[i]){
                    res.push_back(arr1[j]);
                    arr1[j] = -3;
                }
            }
        }
        sort(arr1.begin(), arr1.end());
        for(int i = 0; i < arr1.size(); i++){
            if(arr1[i] != -3){
                res.push_back(arr1[i]);
            }
        }
        return res;
    }
};