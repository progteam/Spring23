/*Solution 1 using String*/
class Solution {
    public int countDigits(int num) {
        String n = Integer.toString(num);
        int total = 0;
        for(int i = 0; i < n.length(); i++){
            if(num % ((int)n.charAt(i)-48) == 0){
                total++;
            }
        }
        return total;
    }
}
/*Solution 2 using int*/
/*
class Solution {
    public int countDigits(int num) {
        int total = 0;
        int n = num;
        while(n>0){
            if(num % (n%10) == 0){
                total++;
            } 
            n/=10;
        }
        return total;
    }
}
*/
