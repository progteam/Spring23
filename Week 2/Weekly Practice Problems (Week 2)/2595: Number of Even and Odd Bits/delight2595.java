/*Solution 1*/
class Solution {
    public int[] evenOddBit(int n) {
        int even = 0, odd = 0;
        StringBuilder bin = new StringBuilder(Integer.toBinaryString(n));
        bin.reverse();
        for(int i = bin.length()-1; i >= 0; i--){
            if(bin.charAt(i) == '1'){
                if(i % 2 == 0){
                    even += 1;
                }else{
                    odd += 1;
                }
            }
        }
        int[] answer = {even, odd};
        return answer;
    }
}
/*Solution 2*/
/*
public int[] evenOddBit(int n) {
    return new int[] {Integer.bitCount(n & 0b0101010101), 
                      Integer.bitCount(n & 0b1010101010)};
}
*/
