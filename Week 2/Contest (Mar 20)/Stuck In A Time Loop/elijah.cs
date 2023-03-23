using System;
using System.Linq;

class Entry
{
    static void Main()
    {
        int num = int.Parse(Console.ReadLine());
        
        for (int i = 1; i <= num; i++)
        {
            Console.WriteLine(i.ToString() + " Abracadabra");
        }
    }
}
