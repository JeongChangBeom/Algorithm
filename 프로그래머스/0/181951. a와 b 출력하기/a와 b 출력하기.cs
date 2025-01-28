using System;

public class Example
{
    public static void Main()
    {
        String[] s;

        Console.Clear();
        s = Console.ReadLine().Split(' ');

        int a = int.Parse(s[0]);
        int b = int.Parse(s[1]);

        Console.WriteLine($"a = {a}");
        Console.WriteLine($"b = {b}");
    }
}