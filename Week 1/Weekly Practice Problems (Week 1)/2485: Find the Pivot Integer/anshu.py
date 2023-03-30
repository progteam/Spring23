class Solution:
    def pivotInteger(self, n: int) -> int:
        if n == 1:
            return 1
        total_sum = n * (n + 1) // 2
        left_sum = 0

        for x in range(1, n):
           left_sum += x
           right_sum = total_sum - left_sum - (x + 1)

           if left_sum == right_sum:
               return x + 1

        return -1
