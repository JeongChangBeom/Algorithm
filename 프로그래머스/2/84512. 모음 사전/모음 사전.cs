using System;

public class Solution
{
    char[] alpha = { 'A', 'E', 'I', 'O', 'U' };
    int answer = 0;
    int count = 0;

    public void DFS(string str, string target)
    {
        if (str == target)
        {
            answer = count;
            return;
        }

        if (str.Length == 5)
            return;

        for (int i = 0; i < 5; i++)
        {
            count++;
            DFS(str + alpha[i], target);
        }
    }

    public int solution(string word)
    {
        answer = 0;
        count = 0;
        
        DFS("", word);

        return answer;
    }
}