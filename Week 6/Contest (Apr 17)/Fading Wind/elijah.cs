using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        var inputs = Console.ReadLine().Split(' ').Select(s => int.Parse(s)).ToArray();
        int h = inputs[0];
        int k = inputs[1];
        int v = inputs[2];
        int s = inputs[3];

        int dist = 0;

        while (h > 0)
        {
            v += s;
            v -= (int)Math.Max(1, v/10);
            if (v >= k)
                h++;
            if (0 < v && v < k)
            {
                h--;
                if (h == 0)
                    v = 0;
            }
            if (v <= 0)
            {
                h = 0;
                v = 0;
            }

            dist += v;

            if (s > 0)
                s--;
        }

        Console.WriteLine(dist);
    }
}
