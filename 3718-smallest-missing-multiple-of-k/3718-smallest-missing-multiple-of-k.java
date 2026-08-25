class Solution {
    public int missingMultiple(int[] nums, int k) {
        Set<Integer> set = new HashSet<>();
        for (int n : nums) {
            set.add(n);
        }
        int firstmul = k;
        while(set.contains(firstmul)){
            firstmul += k;
        }
        return firstmul;
    }
}