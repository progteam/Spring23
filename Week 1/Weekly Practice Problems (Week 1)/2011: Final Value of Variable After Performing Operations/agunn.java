class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int X = 0;
        for (String s: operations) {
            switch (s) {
                case "X++", "++X":
                    X++;
                    break;
                case "X--", "--X":
                    X--;
                    break;
            }
        }
        return X;
    }
}
