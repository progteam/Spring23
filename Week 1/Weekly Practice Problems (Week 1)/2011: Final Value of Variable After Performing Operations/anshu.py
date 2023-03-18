class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        x=0
        for c in operations:
            if c == "++X" or c == "X++":
                x+=1
            else:
                x-=1
        return x            
