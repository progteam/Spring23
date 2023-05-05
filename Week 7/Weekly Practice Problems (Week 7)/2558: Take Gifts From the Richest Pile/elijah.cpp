class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k)
    {
        priority_queue<int> queue(gifts.begin(), gifts.end());

        while (k--)
        {
            int top = queue.top();
            queue.pop();
            queue.push(floor(sqrt(top)));
        }

        long long result = 0;
        while (queue.size() > 0)
        {
            result += queue.top();
            queue.pop();
        }

        return result;
    }
};
