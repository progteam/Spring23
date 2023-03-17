class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        string s;
        for (int i = 1; i <= n; i ++) {
            s = "";
            if (i % 3 == 0) {
                s += "Fizz";
            } if (i % 5 == 0) {
                s += "Buzz";
            } if (s.length() == 0) {
                s += to_string(i);
            }
            answer.push_back(s);
        }
        return answer;
    }
};
