class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            int back = n-i-1;
            res += mat[i][i];
            if (back != i) res += mat[i][back];
        }
        return res;
    }
};
