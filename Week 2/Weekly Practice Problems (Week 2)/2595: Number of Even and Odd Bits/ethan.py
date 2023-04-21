class Solution:
    def evenOddBit(self, n: int) -> List[int]:
        b, even, odd = (bin(n)[2:])[::-1], 0, 0
        
        for i in range(0, len(b)):
            if b[i] == "1":
                if i % 2 == 0:
                    even += 1
                else:
                    odd += 1
        
        return [even, odd]
