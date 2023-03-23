using System;
using System.Linq;

class Entry
{
    static void Main()
    {
        int[] sun = Console.ReadLine()
            .Split(' ')
            .Select(s => int.Parse(s))
            .ToArray();
            
        int[] moon = Console.ReadLine()
            .Split(' ')
            .Select(s => int.Parse(s))
            .ToArray();
            
        int i = sun[0];
        int j = moon[0];
        for (int k = 0; k <= 5000; k++)
        {
            bool solarEclipse = i == sun[1];
            bool lunarEclipse = j == moon[1];
            
            if (solarEclipse && lunarEclipse)
            {
                Console.WriteLine(k);
            }
            else if (solarEclipse)
            {
                i = 0;
            }
            else if (lunarEclipse)
            {
                j = 0;
            }
            
            i++;
            j++;
        }
    }
}
