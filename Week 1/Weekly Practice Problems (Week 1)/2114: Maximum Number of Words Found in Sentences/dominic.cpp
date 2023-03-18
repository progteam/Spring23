class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        for (auto &s : sentences) {
            int curr = 0;
            for (auto &c : s) {
                if (c == ' ') curr++;
            }
            res = max(res, curr+1);
        }
        return res;
    }
};
