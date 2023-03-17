class Solution {
    public String restoreString(String s, int[] indices) {
        char[] ch_s = new char[s.length()];
        for (int i = 0; i < s.length(); i++) {
            ch_s[indices[i]] = s.charAt(i);
        }
        return String.valueOf(ch_s);
    }
}
