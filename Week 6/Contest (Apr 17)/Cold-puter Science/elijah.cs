using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        #if REPL
        Console.WriteLine("Begin");
        #endif
        
        var numTemps = int.Parse(Console.ReadLine());
        var temps = Console.ReadLine().Split(' ').Select(s => int.Parse(s));

        int result = 0;
        foreach (int temp in temps)
        {
            if (temp < 0)
            {
                result++;
            }
        }

        Console.WriteLine(result);
    }
}
