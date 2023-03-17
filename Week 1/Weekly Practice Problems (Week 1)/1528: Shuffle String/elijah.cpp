class Solution {
public:
    string restoreString(string s, vector<int>& indices)
    {
        char chars[100];

        for (int i = 0; i < indices.size(); i++)
        {
            chars[indices[i]] = s[i];
        }

        return string(chars, indices.size() * sizeof(char));
    }
};
