typedef pair<int, int> pii;

class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<pii> d;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (nums[i]+k != nums[j] && nums[i]-k != nums[j]) continue;
                d.emplace_back(1<<i, 1<<j);
            }
        }
        
        int count = 0;
        for (int i = 0; i < (1<<n); i++) {
            for (auto &j : d) {
                if ((i & j.first) && (i & j.second)) {
                    count++;
                    break;
                }
            }
        }
        
        return (1<<n) - count - 1;
    }
};
