class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        a = []
        for i in nums:
            num_smaller = 0
            for j in nums:
                if i > j: 
                    num_smaller += 1
            a.append(num_smaller)
        return a
