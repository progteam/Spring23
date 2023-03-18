class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (j == i) continue;
                if (nums[j] < nums[i]) answer[i]++;
            }
        }
        return answer;
    }
};
