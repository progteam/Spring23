// Fun and faster (but a bit more complicated) bitwise
class Solution {
public:
    int partitionString(string s) {
        int n = 0;
        int res = 1;
        for (char &c : s) {
            int curr = (2 << (c-'a'));
            if (n & curr) {
                n = 0;
                res++;
            }
            n = (n | curr);
        }
        return res;
    }
};

// Simple hashset, probably better for contests and less likely to produce bugs
/*
class Solution {
public:
    int partitionString(string s) {
        int res = 1;
        unordered_set<char> m;
        for (char c : s) {
            if (m.count(c)) {
                res++;
                m.clear();
            }
            m.insert(c);
        }
        return res;
    }
};
*/
