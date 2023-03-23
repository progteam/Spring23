class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        vector<int> dirX = {-2, -1, 1, 2, 2, 1, -1, -2};
        vector<int> dirY = {1, 2, 2, 1, -1, -2, -2, -1};
        
        int n = pow(grid.size(), 2);
        int x = 0, y = 0;
        for (int i = 1; i < n; i++) {
            bool f = false;
            for (int j = 0; j < 8; j++) {
                int r = x + dirX[j];
                int c = y + dirY[j];
                
                if (r < 0 || c < 0 || r >= grid.size() || c >= grid.size()) continue;
                if (grid[r][c] == i) {
                    f = true;
                    x = r;
                    y = c;
                    break;
                }
            }
            if (!f) return false;
        }
        return true;
    }
};
