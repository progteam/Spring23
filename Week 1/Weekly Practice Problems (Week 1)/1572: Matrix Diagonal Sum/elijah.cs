public class Solution
{
    public int DiagonalSum(int[][] mat)
    {
        int sum = 0;

        for (int i = 0; i < mat.Length; i++)
        {
            sum += mat[i][i];

            if (mat.Length - 1 - i != i)
            {
                sum += mat[mat.Length - 1 - i][i];
            }
        }

        return sum;
    }
}
