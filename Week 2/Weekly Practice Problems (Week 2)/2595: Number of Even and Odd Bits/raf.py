class Solution:
    def evenOddBit(self, n: int) -> List[int]:
        even, odd = 0, 0
        binary = bin(n)[2:][::-1]
        for i, bit in enumerate(binary):
            if (i % 2):
                if (bit == "1"): odd += 1
            else:
                if (bit == "1"): even += 1
        return [even, odd]
