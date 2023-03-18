class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size(), size = n*2;
        vector<int> res(n, -1);
        stack<int> s;

        for (int i = 0; i < size; i++) {
            while (!s.empty() && nums[s.top()] < nums[i%n]) {
                res[s.top()] = nums[i%n];
                s.pop();
            }
            s.push(i%n);
        }

        return res;
    }
};
