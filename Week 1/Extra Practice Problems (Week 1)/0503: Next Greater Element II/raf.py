class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        num_range = len(nums)
        result = [-1] * num_range
        for i in range(num_range):
            for j in range(i+1, i+num_range):
                if nums[j % num_range] > nums[i]: # 
                    result[i] = nums[j % num_range]
                    break
        return result
