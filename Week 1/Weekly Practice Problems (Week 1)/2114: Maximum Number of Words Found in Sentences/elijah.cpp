class Solution
{
public:
    int mostWordsFound(vector<string>& sentences)
    {
        int maxspaces = -1;

        for (string sentence : sentences)
        {
            int numspaces = 0;

            for (char c : sentence)
            {
                if (c == ' ')
                {
                    numspaces++;
                }
            }

            maxspaces = (maxspaces > numspaces) ? maxspaces : numspaces;
        }

        return maxspaces + 1;
    }
};
