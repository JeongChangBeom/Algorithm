class Program
{
    static void Main()
    {
        string str = Console.ReadLine();

        int sum = 0;
        int w = 0;

        for (int i = 0; i < str.Length; i++)
        {
            if (str[i] != '*')
            {
                if (i % 2 != 0)
                {
                    sum += (str[i] - '0') * 3;
                }
                else
                {
                    sum += str[i] - '0';
                }
            }
            else
            {
                if (i % 2 != 0)
                {
                    w = 3;
                }
                else
                {
                    w = 1;
                }
            }
        }

        for (int i = 0; i <= 9; i++)
        {
            if ((i * w + sum) % 10 == 0)
            {
                Console.WriteLine(i);
            }
        }
    }
}