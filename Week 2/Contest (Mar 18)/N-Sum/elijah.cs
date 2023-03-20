using System;
using System.Linq;

static class Entry
{
    static void Main()
    {
        Console.ReadLine();
        int[] integers = Console.ReadLine()
            .Split(' ')
            .Select(s => int.Parse(s))
            .ToArray();
        
        int sum = 0;
        for (int i = 0; i < integers.Length; i++)
        {
            sum += integers[i];
        }
        
        Console.WriteLine(sum);
    }
}
