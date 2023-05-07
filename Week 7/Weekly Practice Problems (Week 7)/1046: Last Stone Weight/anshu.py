class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
           ns = stones
           nstone = stones.sort()
           while len(stones) != 1:
               stones.sort()
               x,y = stones[-2],stones[-1]
               if x == y:
                   stones.pop()
                   stones.pop()
                   if not stones:
                       return 0
               elif x != y:
                   y = y-x
                   stones.pop()
                   stones[-1]= y
