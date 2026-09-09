class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000){
            return 0;
        }
        long long res = 0;
        if(n > 999){
            res += n - 999;
        }
        if(n > 999999){
            res += n - 999999;
        }
        if(n > 999999999){
            res += n - 999999999;
        }
        if(n > 999999999999){
            res += n - 999999999999;
        }
        if(n > 999999999999999){
            res ++;
        }
        return res;
    }
};