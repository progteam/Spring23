using System;
using System.Linq;
using System.Collections.Generic;

partial class Program
{
  static void Main()
  {
    var sizes = Console.ReadLine().Split(' ').Select(s => int.Parse(s));
    int n = sizes.First();
    int m = sizes.Last();

    if (n == 0 || m == 0)
    {
      Console.WriteLine(0);
      return;
    }

    var lists = new List<string[]>();
    for (int i = 0; i < n; i++)
    {
      var items = Console.ReadLine()
        .Split(' ')
        .ToArray();

      lists.Add(items);
    }

    var shared = new List<string>();
    foreach (var item in lists.First())
    {
      if (lists.All(o => o.Contains(item)))
      {
        shared.Add(item);
      }
    }
    
    Console.WriteLine(shared.Count);
    foreach (var s in shared.OrderBy(s => s))
    {
      Console.WriteLine(s);
    }
  }
}
