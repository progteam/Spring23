class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = *max_element(nums.begin(), nums.end()) + 2;
        vector<int> counts(n, 0);

        for (int x : nums) counts[x+1]++;
        for (int i = 1; i < n; i++) counts[i] += counts[i-1];
        for (auto &x : nums) x = counts[x];
        
        return nums;
    }
};
