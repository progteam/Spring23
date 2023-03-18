class Solution {
    public List<String> fizzBuzz(int n) {
        ArrayList<String> output = new ArrayList<>();
        int count = 1;
        for (int i = 0; i < n; i++) {
            if ((count % 3) == 0 && (count % 5) == 0) {
                output.add("FizzBuzz");
            } else if ((count % 3) == 0) {
                output.add("Fizz");
            } else if ((count % 5) == 0) {
                output.add("Buzz");
            } else {
                output.add(String.valueOf(count));
            }
            ++count;
        }
        return output;
    }
}
