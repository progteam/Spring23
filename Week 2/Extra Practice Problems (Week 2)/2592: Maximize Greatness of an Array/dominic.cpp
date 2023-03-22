class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l = 0, r = 1;
        int res = 0;
        while (r < n) {
            if (nums[l] < nums[r]) {
                res++;
                l++;
            }
            r++;
        }
        
        return res;
    }
};
