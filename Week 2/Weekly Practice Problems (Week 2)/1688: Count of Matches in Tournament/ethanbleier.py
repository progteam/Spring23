class Solution:
    def numberOfMatches(self, n: int) -> int:
        match_total = 0
        for i in range(n):
            if n % 2 == 0: # even
                match_total += 1
                n /= 2
            else:          # odd
                match_total += 1
                n = (n - 1) / 2
        return match_total-1
