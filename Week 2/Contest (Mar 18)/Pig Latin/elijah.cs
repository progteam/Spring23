using System;
using System.Linq;
using System.Collections.Generic;

class Entry
{
    static void Main()
    {
        while (true)
        {
            string input = Console.ReadLine();
            
            if (string.IsNullOrEmpty(input))
            {
                break;
            }
        
            char[] vowels = new[]
            {
                'a', 'e', 'i', 'o', 'u', 'y'
            };
            
            var results = new List<string>();
            foreach (var word in input.Split(' '))
            {
                // Starts with vowel
                if (vowels.Any(c => c == word[0]))
                {
                    results.Add(word + "yay");
                }
                // Starts with consonant
                else
                {
                    for (int i = 0; i < word.Length; i++)
                    {
                        // Found vowel
                        if (vowels.Any(c => c == word[i]))
                        {
                            string start = word.Substring(0, i);
                            string end = word.Substring(i);
                            results.Add(end + start + "ay");
                            break;
                        }
                    }
                }
            }
            
            Console.WriteLine(string.Join(' ', results));
        }
    }
}
