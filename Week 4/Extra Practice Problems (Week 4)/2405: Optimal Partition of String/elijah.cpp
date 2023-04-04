class Solution {
public:
    int partitionString(string s)
    {
        vector<string> substrings;
        for (int i = 0; i < s.length(); i++)
        {
            vector<char> substring;

            int j = 0;
            for (j = i; j < s.length(); j++)
            {
                if (count(substring.begin(), substring.end(), s[j]))
                {
                    i = j - 1;
                    break;
                }
                else
                {
                    i = j; // Just in case it ends here... there are smarter ways to do this
                    substring.push_back(s[j]);
                }
            }

            if (substring.size() > 0)
            {
                substrings.push_back(string(substring.begin(), substring.end()));
            }
        }

        return substrings.size();
    }
};
