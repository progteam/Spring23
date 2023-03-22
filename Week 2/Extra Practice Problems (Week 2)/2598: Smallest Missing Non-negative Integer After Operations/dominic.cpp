class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int res = 0;
        map<int, int> m;
        for (auto num : nums) {
            num %= value;
            if (num < 0) num += value;
            m[num]++;
        }
        
        for (auto &it : m) {
            if (it.second == 0) break;
            if (res != it.first) break;
            res++;
            m[it.first + value] += (it.second - 1);
        }
        
        return res;
    }
};
