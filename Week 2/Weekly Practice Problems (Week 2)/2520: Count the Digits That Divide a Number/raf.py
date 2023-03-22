class Solution:
    def countDigits(self, num: int) -> int:
        return sum(1 for i in [*str(num)] if num % int(i) == 0)
