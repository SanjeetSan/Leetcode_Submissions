class Solution {
    public int climbStairs(int n) {
        if(n <= 3){
            return n;
        }
        int prev = 1;
        int prev1 = 1;
        int ans = 0;
        for(int i = 2; i <= n; i++){
            ans = prev + prev1;
            prev1 = prev;
            prev = ans;
        }
        return ans;
    }
}