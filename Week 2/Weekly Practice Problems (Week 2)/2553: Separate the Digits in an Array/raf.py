class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        return [int(d) for n in nums for d in str(n)]
