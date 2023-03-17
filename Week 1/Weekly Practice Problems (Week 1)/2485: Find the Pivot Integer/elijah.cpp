class Solution {
public:
    int pivotInteger(int n)
    {
        int fromStart = 0;
        for (int i = 1; i <= n; i++)
        {
            fromStart += i;
            int fromEnd = 0;
            for (int j = n; j >= i; j--)
            {
                fromEnd += j;
            }

            if (fromEnd == fromStart)
            {
                return i;
            }
        }

        return -1;
    }
};
