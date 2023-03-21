class Solution {
    public int pivotInteger(int n) {
        // (n * (n+1)) / 2
        int L = 0;
        int R = 0;
        int x;
        if (n == 1) {
            return n;
        }
        for (int i = 0; i < n; i++) {
            L = (i * (i+1)) / 2;
            R = ((n * (n+1)) / 2) - (i * (i-1)) / 2;
            if (L == R) {
                return i;
            }
        }
        return -1;
    }
}
