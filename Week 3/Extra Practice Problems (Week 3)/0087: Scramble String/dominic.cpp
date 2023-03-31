class Solution {
public:
    vector<vector<vector<int>>> memo;

    bool solve(string s1, string s2, int l, int r) {  
        int len = s1.length(); 
        if (memo[l][r][len] > -1) return memo[l][r][len];
        if (s1 == s2) return memo[l][r][len] = 1;
        

        for (int i = 1; i < len; i++) {
            string x = s1.substr(0, i), y = s1.substr(i, len);
            string s2x = s2.substr(0, i), s2y = s2.substr(i, len);
            if (solve(x, s2x, l, r) && solve(y, s2y, l+i, r+i)) {
                return memo[l][r][len] = 1;
            }

            string flip = y + x;
            string flipX = flip.substr(0, len-i), flipY = flip.substr(len-i, len);
            string flips2x = s2.substr(0, len-i), flips2y = s2.substr(len-i, len);
            if (solve(flipX, flips2x, l+i, r) && solve(flipY, flips2y, l, r+(len-i))) {
                return memo[l][r][len] = 1;
            }
        }

        return memo[l][r][len] = 0;
    }

    bool isScramble(string s1, string s2) {
        int len = s1.length();
        memo.assign(len, vector<vector<int>>(len, vector<int>(len+1, -1)));
        return solve(s1, s2, 0, 0);
    }
};
