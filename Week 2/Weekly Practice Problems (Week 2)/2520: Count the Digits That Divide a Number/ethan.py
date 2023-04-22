class Solution:
    def countDigits(self, num: int) -> int:
        sum_digits = 0
        s = str(num)
        for i in s:
            if num % int(i) == 0:
                sum_digits += 1
        
        return sum_digits
