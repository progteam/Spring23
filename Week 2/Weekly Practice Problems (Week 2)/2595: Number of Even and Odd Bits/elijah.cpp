class Solution {
public:
    vector<int> evenOddBit(int n)
    {
        int even = 0;
        int odd = 0;

        for (int i = 0, quotient = n; quotient != 0; i++)
        {
            int remainder = quotient % 2;
            quotient /= 2;

            if (remainder)
            {
                if (i % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
        }

        return { even, odd };
    }
};
