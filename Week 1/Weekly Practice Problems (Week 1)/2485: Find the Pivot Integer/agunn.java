class Solution {
    // (n * (n + 1))/2
    public int pivotInteger(int n) {
        int left, right;
        for (int i = 1; i <= n; i++) {
            left = (i * (i + 1))/2;
            right = (n * (n + 1))/2 - (i * (i - 1))/2;
            if (left == right) {
                return i;
            }
        }
        return -1;
    }
}
