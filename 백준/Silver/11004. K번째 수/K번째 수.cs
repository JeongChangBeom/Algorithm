class Program
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split();

        int N = int.Parse(input[0]);
        int K = int.Parse(input[1]);

        List<int> A = new();
        string[] numbers = Console.ReadLine().Split();

        for (int i = 0; i < N; i++)
        {
            A.Add(int.Parse(numbers[i]));
        }

        A.Sort();

        Console.WriteLine(A[K - 1]);
    }
}