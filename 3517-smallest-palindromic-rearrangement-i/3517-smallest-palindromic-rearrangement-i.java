class Solution {
    public String smallestPalindrome(String s) {
        int n = s.length();
        int mid = n / 2;
        if(n == 1){
            return s;
        }
        char[] arr = s.toCharArray();
        Arrays.sort(arr,0,mid);
        int j = n-1, i = 0;
        while(i <= j){
            arr[j--] = arr[i++];
        }
        String res = new String(arr);
        return res;
    }
}