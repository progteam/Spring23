using System;
using System.Linq;
using System.Collections.Generic;

partial class Program
{
  static void Main()
  {
    string msg = Console.ReadLine();
    int n = msg.Length;

    int rows = -1;
    int columns = -1;
    for (int r = msg.Length; r > 1 && rows == -1 && columns == -1; r--)
    {
      for (int c = r; c < msg.Length; c++)
      {
        if (c * r == n)
        {
          rows = r;
          columns = c;
          break;
        }
      }
    }

    if (rows == -1 || columns == -1)
    {
      rows = 1;
      columns = msg.Length;
    }
    else if (columns > rows)
    {
      int temp = rows;
      rows = columns;
      columns = temp;
    }

    for (int i = 0; i < columns; i++)
    {
      for (int j = 0; j < rows; j++)
      {
        Console.Write(msg[i + (j * columns)]);
      }
    }
  }
}
