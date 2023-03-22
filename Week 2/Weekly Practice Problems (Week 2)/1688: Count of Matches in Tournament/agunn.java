class Solution {
    public int numberOfMatches(int n) {
        int count = 0;
        while (n > 0) {
            // Add matches to count
            count = count + n/2;
            // Advance teams
            n = (n+1)/2;
            if (n == 1) {
                break;
            }
        }
        return count;
    }
}
