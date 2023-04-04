using System;
using System.Linq;
using System.Collections.Generic;

partial class Program
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    var forecast = Console.ReadLine().Split(' ').Select(s => int.Parse(s)).ToArray();

    int smallestTemp = -1;
    int smallestIdx = -1;
    
    for (int i = 0; i < n - 2; i++)
    {
      int max = (int)Math.Max(forecast[i], forecast[i + 2]);

      if (max < smallestTemp || smallestIdx == -1)
      {
        smallestIdx = i;
        smallestTemp = max;
      }
    }

    Console.Write((smallestIdx + 1) + " ");
    Console.Write(smallestTemp);
  }
}
