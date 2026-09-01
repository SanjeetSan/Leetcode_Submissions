class Solution {
public:
    vector<vector<vector<int>>> dp;
    int dploop(vector<int>& nums,int x,int hold,int trans){
        if( trans == 0 || x >= nums.size() )
            return 0;
        if( dp[x][hold][trans] != -1 ) return dp[x][hold][trans];
        int ans = 0 ;
        if( !hold ){
            ans = max(ans, dploop(nums,x+1,1,trans) - nums[x] );
        }else{
            ans = max( ans , dploop(nums,x+1,0,trans -1 ) + nums[x] );
        }
        ans = max( ans , dploop(nums,x+1,hold,trans) );
        return dp[x][hold][trans] = ans;
    }
    int maxProfit(vector<int>& prices) {
        dp.resize( prices.size() , vector<vector<int>>( 2 , vector<int> ( 3 , -1  ) ) );
        return dploop(prices,0,0,2);
    }
};