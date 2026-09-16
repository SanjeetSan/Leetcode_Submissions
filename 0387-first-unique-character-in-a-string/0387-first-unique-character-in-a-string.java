class Solution {
    public int firstUniqChar(String s) {
        Queue<Character> q = new ArrayDeque<>();
        int[] count = new int[26];
        for (char c : s.toCharArray()) {
            count[c - 'a']++;
            if (count[c - 'a'] == 1) {
                q.add(c);
            }
        }
        for (char c : s.toCharArray()) {
            if (count[c - 'a'] == 1 && c == q.peek()) {
                return s.indexOf(c);
            }
            q.poll();
        }
        return -1;
    }
}