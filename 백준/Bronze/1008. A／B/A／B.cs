class Program
{
    static void Main()
    {
        string? str = Console.ReadLine();

        if (str == null) return;

        string[] input = str.Split();

        double A = double.Parse(input[0]);
        double B = double.Parse(input[1]);

        Console.WriteLine(A / B);
    }
}