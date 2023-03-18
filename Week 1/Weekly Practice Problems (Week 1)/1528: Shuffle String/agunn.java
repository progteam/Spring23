class Solution {
    public String restoreString(String s, int[] indices) {
        char[] chars = s.toCharArray();
        char[] reorder = new char[s.length()];
        for (int i = 0; i < indices.length; i++) {
            reorder[indices[i]] = chars[i];
        }
        return new String(reorder);
    }
}
