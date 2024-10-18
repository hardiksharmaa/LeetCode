class Solution {
    public int lengthOfLongestSubstring(String s) {
        if (s.length() == 0) return 0;
        int i = 0;
        int j = 0; // start both i and j from 0
        HashMap<Character, Integer> map = new HashMap<>();
        int max = Integer.MIN_VALUE;
        while (j < s.length()) {
            if (map.containsKey(s.charAt(j))) {
                i = Math.max(map.get(s.charAt(j)) + 1, i); 
            }
            map.put(s.charAt(j), j);
            max = Math.max(max, j - i + 1);
            j++;
        }
        return max;
    }
}