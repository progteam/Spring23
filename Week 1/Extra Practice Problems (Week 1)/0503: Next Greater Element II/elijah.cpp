class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums)
    {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            int index = -1;

            for (int j = (i + 1) % nums.size(); j != i; j = (j + 1) % nums.size())
            {
                if (nums[j] > nums[i])
                {
                    index = nums[j];
                    break;
                }
            }

            result.push_back(index);
        }

        return result;
    }
};
