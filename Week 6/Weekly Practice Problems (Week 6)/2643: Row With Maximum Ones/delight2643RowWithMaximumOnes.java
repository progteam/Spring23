class Solution {
    public int[] rowAndMaximumOnes(int[][] mat) {
        int[] results = {0, 0};
        int count = 0;
        for(int i = 0; i < mat.length; i++){
            for(int j = 0; j < mat[i].length; j++){
                if(mat[i][j] == 1) {
                    count++;
                }
            }
            if(count > results[1]){
                results[0] = i;
                results[1] = count;
            }
            count = 0;
        }
        return results;
    }
}
