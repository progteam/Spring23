class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> answer = new ArrayList<>();
        int count = 1;
        for (int i = 0; i < n; i++) {
            if (count % 3 == 0 && count % 5 == 0) {
                answer.add("FizzBuzz");
            } else if (count % 5 == 0) {
                answer.add("Buzz");
            } else if (count % 3 == 0) {
                answer.add("Fizz");
            } else {
                answer.add(String.valueOf(i+1));
            }
            count++;
        }
        return answer;
    }
}
