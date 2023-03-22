class Solution:
    def __init__(self):
        self.count = 0

    def numberOfMatches(self, n: int) -> int:
        if n == 1:
            return self.count
        elif n % 2 == 0:
            self.count += n // 2
            return self.numberOfMatches(n // 2)
        else:
            self.count += (n - 1) // 2
            return self.numberOfMatches((n - 1) // 2 + 1)
