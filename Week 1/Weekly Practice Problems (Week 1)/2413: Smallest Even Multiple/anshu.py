class Solution:
    def smallestEvenMultiple(self, n: int) -> int:
        ans = n
        while not(ans % 2 == 0 and ans % n == 0):
            ans+=1
        return ans        
