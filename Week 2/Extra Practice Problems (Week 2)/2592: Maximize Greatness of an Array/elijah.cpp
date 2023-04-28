class Solution {
public:
    int maximizeGreatness(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());

        int result = 0;
        for (int i = nums.size() - 2, j = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] < nums[j])
            {
                j--;
                result++;
            }
        }

        return result;
    }
};
