typedef pair<int, int> pii;

class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long res = 0;
        int n = nums.size();
        vector<int> visited(n, 0);
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        for (int i = 0; i < n; i++) {
            pq.emplace(nums[i], i);
        }
        
        while (!pq.empty()) {
            auto [val, i] = pq.top(); pq.pop();
            if (visited[i]) continue;
            res += val;
            if (i > 0) visited[i-1] = 1;
            visited[i] = 1;
            if (i < n-1) visited[i+1] = 1;
        }
        return res;
    }
};
