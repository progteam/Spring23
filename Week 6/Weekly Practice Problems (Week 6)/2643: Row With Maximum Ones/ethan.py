class Solution:
    def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:
        count = -100

        for i in range(0, len(mat)):
            if sum(mat[i]) > count:
                index = i
                count = sum(mat[index])

        return [index, count]
