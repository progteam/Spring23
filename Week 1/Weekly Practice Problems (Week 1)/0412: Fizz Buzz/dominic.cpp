class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res(n);
        for (int i = 1; i <= n; i++) {
            string curr;
            if (!(i%3)) curr += "Fizz";
            if (!(i%5)) curr += "Buzz";
            res[i-1] = curr.empty() ? to_string(i) : curr;
        }
        return res;
    }
};
