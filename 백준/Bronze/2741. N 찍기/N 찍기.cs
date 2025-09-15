using System.Text;

class Program
{
    static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        var sb = new StringBuilder();

        for (int i = 1; i <= N; i++)
        {
            sb.AppendLine(i.ToString());
        }

        Console.Write(sb.ToString());
    }
}