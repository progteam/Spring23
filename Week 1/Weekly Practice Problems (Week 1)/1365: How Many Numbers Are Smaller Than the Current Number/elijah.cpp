class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] < nums[i])
                {
                    num++;
                }
            }

            result.push_back(num);
        }

        return result;
    }
};
