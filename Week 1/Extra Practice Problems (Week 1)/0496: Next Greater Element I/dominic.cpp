class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        stack<int> s;
        for (auto &x : nums2) {
            while (!s.empty() && x > s.top()) {
                m[s.top()] = x;
                s.pop();
            }
            s.push(x);
        }

        int n = nums1.size();
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            res[i] = (m.count(nums[i]) ? m[nums[i]] : -1);
        }

        return res;
    }
};
