using System.Text;

class Program
{
    static void Main()
    {
        int M = int.Parse(Console.ReadLine());
        HashSet<int> set = new HashSet<int>();
        var sb = new StringBuilder();

        for (int i = 0; i < M; i++)
        {
            string[] input = (Console.ReadLine()).Split();

            string cmd = input[0];

            switch (cmd)
            {
                case "add":
                    set.Add(int.Parse(input[1]));
                    break;
                case "remove":
                    set.Remove(int.Parse(input[1]));
                    break;
                case "check":
                    sb.AppendLine((set.Contains(int.Parse(input[1])) ? 1 : 0).ToString());
                    break;
                case "toggle":
                    if (set.Contains(int.Parse(input[1])))
                    {
                        set.Remove(int.Parse(input[1]));
                    }
                    else
                    {
                        set.Add(int.Parse(input[1]));
                    }
                    break;
                case "all":
                    set.Clear();
                    for (int j = 1; j <= 20; j++)
                    {
                        set.Add(j);
                    }
                    break;
                case "empty":
                    set.Clear();
                    break;
            }
        }
        Console.Write(sb.ToString());
    }
}