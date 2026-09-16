class Solution {
    public int firstUniqChar(String s) {
        Queue<int[]> q = new ArrayDeque<>();
        int[] count = new int[26];
        for (int i = 0; i < s.length(); i++) {
            int c = s.charAt(i) - 'a';
            count[c]++;
            if (count[c] == 1) {
                q.add(new int[]{c, i});
            }
        }
        while (!q.isEmpty()) {
            int[] p = q.peek();
            if (count[p[0]] == 1) return p[1];
            q.poll();
        }
        return -1;
    }
}
    