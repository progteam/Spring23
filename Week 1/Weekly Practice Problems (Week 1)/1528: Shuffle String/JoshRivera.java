class Solution {
    public String restoreString(String s, int[] indices) {
        int n = s.length();
        StringBuilder sb = new StringBuilder();
        char newString[] = new char[n];
        for (int i = 0; i < indices.length; i++) {
            newString[indices[i]] = s.charAt(i);
        }
        sb.append(newString);
        return sb.toString();
    }
}
