class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat)
    {
        int maxRow = 0;
        int maxRowCount = 0;

        for (int r = 0; r < mat.size(); r++)
        {
            int count = 0;
            for (int c = 0; c < mat[r].size(); c++)
            {
                count += mat[r][c];
            }

            if (count > maxRowCount)
            {
                maxRowCount = count;
                maxRow = r;
            }
        }

        return vector<int> { maxRow, maxRowCount };
    }
};
