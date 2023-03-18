class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        count = 0
        for c in sentences:
            x = c.split()
            count = max(count,len(x))
        return count    
