class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors)
    {
        int maxDivisor = -1;
        int maxScore = -1;

        for (int i = 0; i < divisors.size(); i++)
        {
            int score = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] % divisors[i] == 0)
                {
                    score++;
                }
            }

            if (score > maxScore)
            {
                maxDivisor = divisors[i];
                maxScore = score;
            }
            else if (score == maxScore)
            {
                maxDivisor = min(maxDivisor, divisors[i]);
            }
        }

        return maxDivisor;
    }
};
