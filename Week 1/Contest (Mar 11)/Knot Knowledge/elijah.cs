using System;
using System.Linq;

static class App
{
    static void Main()
    {
        Console.ReadLine();
        int[] needed = Console.ReadLine().Split(' ').Select(o => int.Parse(o)).ToArray();
        int[] known = Console.ReadLine().Split(' ').Select(o => int.Parse(o)).ToArray();
        int[] remaining = needed.Where(o => !known.Any(o2 => o2 == o)).ToArray();
        
        Console.WriteLine(remaining[0]);
    }
}
