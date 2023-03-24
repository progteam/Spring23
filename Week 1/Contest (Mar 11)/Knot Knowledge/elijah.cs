using System;
using System.Linq;

static class App
{
    static void Main()
    {
        Console.ReadLine();
        
        var needed = Console.ReadLine()
            .Split(' ')
            .Select(o => int.Parse(o));
        
        var known = Console.ReadLine()
            .Split(' ')
            .Select(o => int.Parse(o));
        
        Console.WriteLine(needed.First(o => !known.Any(o2 => o2 == o)));
    }
}
