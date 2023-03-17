class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        sums, index_r, index_l = 0, 0, len(mat[0])-1
        for row in mat:
            if (index_r == index_l): 
                sums += int(row[index_r])
                index_r += 1
                index_l -= 1
            else:
                sums += (int(row[index_r]) + int(row[index_l]))
                index_r += 1
                index_l -= 1
        return(sums)
