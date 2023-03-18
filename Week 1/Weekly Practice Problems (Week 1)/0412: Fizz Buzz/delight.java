class Solution {
    public List<String> fizzBuzz(int n) {
        String[] answer = new String[n];
        String temp;
        for(int i = 1; i <= n; i++){
            temp = "";
            if(i % 3 == 0){
                temp += "Fizz";
            }
            if(i % 5 == 0){
                temp += "Buzz";
            }
            if(temp == ""){
                temp = Integer.toString(i);
            }
            answer[i-1] = temp;
        }
        return Arrays.asList(answer);
    }
}
