class Solution {
public:
    bool check(long long mid, vector<int>& weights, int days){
        int count = 0, _sum = 0;
        for(int i = 0; i < weights.size(); i++){
            _sum += weights[i];
            if(_sum > mid){
                _sum = weights[i];
                count+=1;
            }
            else if(_sum == mid){
                count +=1;
                _sum = 0;
            }
        }
        if(_sum != 0)   count+=1;
        return (count <= days);
    }

    int shipWithinDays(vector<int>& weights, int days) {
        long long low = *max_element(weights.begin(), weights.end());
        long long high = accumulate(weights.begin(), weights.end(), 0LL);
        int ans = -1;
        if(days == 1)   return high;
        while(low <= high){
            long long mid = (low + high) / 2;
            if(check(mid, weights, days)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};