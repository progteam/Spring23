class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nums2(nums.size(), 0);

        for(int i = 0; i < nums.size(); i++){
            
            bool set = true;
            for(int j = (i + 1)%nums.size(); j != i; j = (j + 1)%nums.size()){
                if(nums[j] > nums[i]){
                    nums2[i] = nums[j];
                    set = false;
                    break;
                }
            }
            if(set){
                nums2[i] = -1;
            }
        }
        return nums2;
    }
};
