class Solution {
    public String sortSentence(String s) {
        String[] words = s.split(" ");
        // int val = 1;
        StringBuilder res = new StringBuilder();
        for (int val = 1; val <= words.length; val++) {
            for (int i = 0; i < words.length; i++) {
                String c = words[i];
                int si = c.length();
                char curr = c.charAt(si - 1);

                if (val == Character.getNumericValue(curr)) {
                    for (int j = 0; j < si - 1; j++) {
                        res.append(c.charAt(j));
                    }
                    res.append(" ");
                    break;
                }
            }
        }
        // res.deleteCharAt(s.length() - 1);
        return res.toString().trim();
        // return res.deleteCharAt(s.length()).toString();
    }
}