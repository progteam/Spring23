/*Solution using bitwise shift*/
class Solution {
    public int[] evenOddBit(int n) {
        int num = n;
        int[] answer = {0, 0};
        int temp;
        for(int i = 0; num > 0; i++){
            if((num & 1) == 1){
                answer[i%2]++;
            }
            num = num >>> 1;
        }
        return answer;
    }
}

/*Solution using int*/
/*
class Solution {
    public int[] evenOddBit(int n) {
        int num = n;
        int even = 0, odd = 0;
        for(int i = 0; num > 0; i++){
            if(num % 2 == 1){
                if(i % 2 == 0){
                    even++;
                }else{
                    odd++;
                }
            }
            num /= 2;
        }
        int[] answer = {even, odd};
        return answer;
    }
}
*/

/*Solution using String*/
/*
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
*/

/*Best Solution using Integer.bitCount*/
/*
public int[] evenOddBit(int n) {
    return new int[] {Integer.bitCount(n & 0b0101010101), 
                      Integer.bitCount(n & 0b1010101010)};
}
*/
