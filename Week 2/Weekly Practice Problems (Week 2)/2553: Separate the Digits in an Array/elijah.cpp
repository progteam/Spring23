class Solution {
public:
    vector<int> separateDigits(vector<int>& nums)
    {
        vector<int> result;

        for (int num : nums)
        {
            int numDigits = 0;
            int num2 = num;
            while (num2 != 0)
            {
                num2 /= 10;
                numDigits++;
            }

            for (int i = numDigits - 1; i >= 0; i--)
            {
                int digit = (int)(num / pow(10, i)) % 10;

                result.push_back(digit);
            }
        }

        return result;
    }
};
