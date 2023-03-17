class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        ans = []
        count = 0
        for n in nums:
            for c in nums:
                if c<n:
                    count+=1
            ans.append(count)
            count = 0
            
        return ans        

        
