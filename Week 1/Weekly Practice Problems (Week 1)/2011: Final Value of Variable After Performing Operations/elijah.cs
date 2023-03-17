public class Solution
{
    public int FinalValueAfterOperations(string[] operations)
    {
        int x = 0;

        foreach (var op in operations)
        {
            if (op == "++X" || op == "X++")
                x++;
            else if (op == "--X" || op == "X--")
                x--;
        }

        return x;
    }
}
