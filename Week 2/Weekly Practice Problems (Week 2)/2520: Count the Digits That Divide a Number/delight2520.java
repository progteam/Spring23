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
