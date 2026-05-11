using System;

public class Solution
{
    public int[] solution(int[] sequence, int k)
    {
        int start = 0;
        int sum = 0;

        int bestStart = 0;
        int bestEnd = sequence.Length - 1;

        for (int end = 0; end < sequence.Length; end++)
        {
            sum += sequence[end];

            while (sum > k)
            {
                sum -= sequence[start];
                start++;
            }

            if (sum == k)
            {
                int currentLength = end - start;
                int bestLength = bestEnd - bestStart;

                if (currentLength < bestLength)
                {
                    bestStart = start;
                    bestEnd = end;
                }
            }
        }

        return new int[] { bestStart, bestEnd };
    }
}