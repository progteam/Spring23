class Solution {
    public int pivotInteger(int n) {
        int sum = 0;
        int sum2 = 0;
        for(int i = 1; i <= n ; i++){
            if(n == 1){
                System.out.println( n + " is the pivot integer since: " + n + " = " + n);
            }
             sum += i;
          for(; n > 0 ; n--){
             sum2 += n;
            if(sum2 == sum){
                return sum2;
            }
        }
     }
     return n;
 }
}
