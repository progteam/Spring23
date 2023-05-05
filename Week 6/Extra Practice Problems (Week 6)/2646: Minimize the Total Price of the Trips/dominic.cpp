class Solution {
public:
    int minimumTotalPrice(int n, vector<vector<int>>& edges, vector<int>& price, vector<vector<int>>& trips) {
        vector<vector<int>> al(n);
        vector<int> counts(n, 0);
        for (auto &it : edges) {
            al[it[0]].push_back(it[1]);
            al[it[1]].push_back(it[0]);
        }
        
        vector<int> vis;
        function<bool (int, int)> dfs = [&] (int x, int end) {
            if (x == end) return true;
            vis[x] = 1;
            
            for (auto y : al[x]) {
                if (x == y) continue;
                if (vis[y]) continue;
                
                if(dfs(y, end)) {
                    counts[y]++;
                    return true;
                }
            }
            return false;
        };
        
        for (auto &it : trips) {
            vis.assign(n, 0);
            dfs(it[0], it[1]);
            counts[it[0]]++;
        }
        
        vector<vector<int>> memo(n, vector<int>(2, 1e9));
        
        function <int(int, bool)> addCounts = [&] (int x, bool f) {
            int &curr = memo[x][f];
            if (curr != 1e9) return curr;
            
            if (f) curr = (counts[x]) * (price[x]/2);
            else curr = counts[x] * price[x];
            
            for (auto y : al[x]) {
                if (x == y) continue;
                if (vis[y]) continue;
                
                vis[y] = 1;
                if (f) {
                    curr += addCounts(y, !f);
                } else {
                    curr += min(addCounts(y, true), addCounts(y, false));
                }
                vis[y] = 0;
            }
            
            return curr;
        };
        
        vis.assign(n, 0);
        vis[0] = 1;
        int res = min(addCounts(0, true), addCounts(0, false));
        
        return res;
    }
};
