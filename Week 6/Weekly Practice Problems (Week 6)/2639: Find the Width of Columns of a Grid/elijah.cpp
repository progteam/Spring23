class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> result(n);
        for (int r = 0; r < m; r++)
        {
            for (int c = 0; c < n; c++)
            {
                int val = grid[r][c];
                int len = val < 0 ? 1 : 0;
                if (val == 0)
                {
                    len = 1;
                }
                else
                {
                    while (val != 0)
                    {
                        len++;
                        val /= 10;
                    }
                }

                result[c] = max(result[c], len);
            }
        }

        return result;
    }
};
