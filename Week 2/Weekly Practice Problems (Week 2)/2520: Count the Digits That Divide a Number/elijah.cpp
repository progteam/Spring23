class Solution {
public:
    int countDigits(int num)
    {
        int power = 0;
        int count = 0;

        while (true)
        {
            int digit = (int)(num / pow(10, power++)) % 10;

            if (digit == 0)
            {
                break;
            }

            if (num % digit == 0)
            {
                count++;
            }
        }

        return count;
    }
};
