class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> before;
        vector<int> afterPivot;
        // afterPivot.push_back(pivot);
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                before.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                afterPivot.insert(afterPivot.begin(), pivot);
            }
            else{
                afterPivot.push_back(nums[i]);
            }
        }
        before.insert(before.end(), afterPivot.begin(), afterPivot.end());
        return before;
    }
};