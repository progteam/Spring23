using System;
using System.Linq;

class Entry
{
    static void Main()
    {
        int[] nums = Console.ReadLine()
            .Split(' ')
            .Select(s => int.Parse(s))
            .ToArray();
            
        Array.Sort(nums);
            
        char[] chars = Console.ReadLine().ToCharArray();
        
        foreach (char c in chars)
        {
            if (c == 'A')
            {
                Console.Write(nums[0].ToString() + " ");
            }
            else if (c == 'B')
            {
                Console.Write(nums[1].ToString() + " ");
            }
            else if (c == 'C')
            {
                Console.Write(nums[2].ToString() + " ");
            }
        }
    }
}
