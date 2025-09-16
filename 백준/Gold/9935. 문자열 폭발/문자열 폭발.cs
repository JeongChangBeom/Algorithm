class Program
{
    static void Main()
    {
        string str = Console.ReadLine();
        string boom = Console.ReadLine();

        var stack = new List<char>();

        foreach (char c in str)
        {
            stack.Add(c);

            if (stack.Count >= boom.Length)
            {
                bool isBoom = true;
                for (int i = 0; i < boom.Length; i++)
                {
                    if (stack[stack.Count - boom.Length + i] != boom[i])
                    {
                        isBoom = false;
                        break;
                    }
                }

                if (isBoom)
                {
                    stack.RemoveRange(stack.Count - boom.Length, boom.Length);
                }
            }
        }

        if (stack.Count == 0)
        {
            Console.WriteLine("FRULA");
        }
        else
        {
            Console.WriteLine(new string(stack.ToArray()));
        }
    }
}