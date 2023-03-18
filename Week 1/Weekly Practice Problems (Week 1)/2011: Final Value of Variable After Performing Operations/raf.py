class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        return(sum([(x.count('++') - x.count('--')) for x in operations]))
