class Program
{
    static void Main()
    {
        int N = int.Parse(Console.ReadLine());

        if ((((N % 4 == 0) && (N % 100 != 0))) || N % 400 == 0)
        {
            Console.WriteLine(1);
        }
        else
        {
            Console.WriteLine(0);
        }
    }
}