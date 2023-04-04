using System;
using System.Linq;
using System.Collections.Generic;

partial class Program
{
  static void Main()
  {
    var ints = Console.ReadLine().Split(' ').Select(s2 => int.Parse(s2));
    int t = ints.ElementAt(0);
    int s = ints.ElementAt(1);
    int n = ints.ElementAt(2);

    var times = Console.ReadLine().Split(' ').Select(s2 => int.Parse(s2)).ToArray();
    int t2 = 0;

    int top = 0;
    int bottom = s;
    bool down = true;
    
    for (int i = 1; i <= t; i++)
    {
      if (t2 < times.Length && times[t2] == i - 1)
      //if (times.Contains(i - 1))
      {
        t2++;
        down = !down;
      }
      
      {
        if (down && top > 0)
        {
          top--;
          bottom++;
        }
        if (!down && bottom > 0)
        {
          bottom--;
          top++;
        }
      }
    }

    Console.WriteLine(down ? top : bottom);
  }
}
