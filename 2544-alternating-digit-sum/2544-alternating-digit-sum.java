class Solution {
    public int alternateDigitSum(int n) {
        StringBuilder s = new StringBuilder(Integer.toString(n));
        int sum
         = 0;
        for(int i = 0; i < s.length(); i++){
            char c = s.charAt(i);
            int val = c - '0';
            if(i % 2 == 0){
                sum += val;
            }
            else{
                sum -= val;
            }
        }
        return sum;
    }
}