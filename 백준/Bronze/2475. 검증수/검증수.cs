class Program
{
    static void Main()
    {
        string? str = Console.ReadLine();

        if (str == null) return;

        string[] input = str.Split();

        double sum = 0;

        for (int i = 0; i < input.Length; i++)
        {
            sum += Math.Pow(int.Parse(input[i]), 2);
        }

        Console.WriteLine(sum % 10);
    }
}