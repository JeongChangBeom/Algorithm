class Program
{
    static string Compare(int A, int B)
    {
        if (A > B)
        {
            return ">";
        }
        else if (A == B)
        {
            return "==";
        }
        else
        {
            return "<";
        }
    }

    static void Main()
    {
        string? str = Console.ReadLine();

        if (str == null) return;

        string[] input = str.Split();

        int A = int.Parse(input[0]);
        int B = int.Parse(input[1]);

        Console.WriteLine(Compare(A, B));
    }
}