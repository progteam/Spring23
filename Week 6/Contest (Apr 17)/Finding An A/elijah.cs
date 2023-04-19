using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        var input = Console.ReadLine();

        bool recording = false;
        string result = "";
        for (int i = 0; i < input.Length; i++)
        {
            if (input[i] == 'a')
            {
                recording = true;
            }

            if (recording)
            {
                result += input[i];
            }
        }

        Console.WriteLine(result);
    }
}
