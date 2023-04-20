class Solution:
    def pivotInteger(self, n: int) -> int:
        l, suml, r = 1, 1, n
        sumr = r

        while (l < r):
            if (suml > sumr):
                r -= 1
                sumr += r
            else:
                l += 1
                suml += l
        
        if suml == sumr:
            return l
        else:
            return -1
