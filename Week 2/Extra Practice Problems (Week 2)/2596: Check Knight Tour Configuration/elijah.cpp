class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid)
    {
        vector<pair<int, int>> moves = vector<pair<int, int>>(grid.size() * grid.size() + 1, {-1, -1});

        moves[0] = {0, 0};
        for (int x = 0; x < grid.size(); x++)
        {
            for (int y = 0; y < grid.size(); y++)
            {
                moves[grid[x][y] + 1] = {x, y};
            }
        }

        for (int i = 0; i < moves.size() - 1; i++)
        {
            if (!checkValid(moves[i], moves[i + 1]))
            {
                return false;
            }
        }

        return true;
    }

    bool checkValid(pair<int, int>& from, pair<int, int>& to)
    {
        // clockwise
        bool valid = false;
        valid = valid || from == to;
        valid = valid || to.first == from.first + 1 && to.second == from.second + 2; // up 2, right 1
        valid = valid || to.first == from.first + 2 && to.second == from.second + 1; // up 1, right 2
        valid = valid || to.first == from.first + 2 && to.second == from.second + -1; // down 1, right 2
        valid = valid || to.first == from.first + 1 && to.second == from.second + -2; // down 2, right 1

        valid = valid || to.first == from.first + -1 && to.second == from.second + -2; // down 2, left 1
        valid = valid || to.first == from.first + -2 && to.second == from.second + -1; // down 1, left 2
        valid = valid || to.first == from.first + -2 && to.second == from.second + 1; // up 1, left 2
        valid = valid || to.first == from.first + -1 && to.second == from.second + 2; // up 2, left 1

        return valid;
    }
};
