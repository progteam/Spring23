class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; ans.size() < nums.size() * 2; i = (i + 1) % nums.size()) {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};
