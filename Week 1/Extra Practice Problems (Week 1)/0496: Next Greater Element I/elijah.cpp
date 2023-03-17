class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> result;

        for (int i = 0; i < nums1.size(); i++)
        {
            int index = -1;
            bool isMatched = false;

            for (int j = 0; j < nums2.size(); j++)
            {
                if (isMatched)
                {
                    if (nums2[j] > nums1[i])
                    {
                        index = nums2[j];
                        break;
                    }
                }
                else if (nums2[j] == nums1[i])
                {
                    isMatched = true;
                }
            }

            result.push_back(index);
        }

        return result;
    }
};
