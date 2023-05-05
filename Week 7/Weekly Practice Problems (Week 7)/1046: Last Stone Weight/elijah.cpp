class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        priority_queue<int> s(stones.begin(), stones.end());

        while (s.size() > 1)
        {
            int s1 = s.top(); s.pop();
            int s2 = s.top(); s.pop();

            if (s1 != s2)
            {
                s.push(s1 - s2);
            }
        }
        
        return (s.size() < 1) ? 0 : s.top();
    }
};
