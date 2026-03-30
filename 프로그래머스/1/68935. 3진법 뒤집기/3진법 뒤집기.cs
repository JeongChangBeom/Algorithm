using System;
using System.Text;

public class Solution {
    public int solution(int n) {
        StringBuilder sb = new StringBuilder();

        while (n > 0)
        {
            sb.Append(n % 3);
            n /= 3;
        }

        int answer = 0;
        int power = 1;

        for (int i = sb.Length - 1; i >= 0; i--)
        {
            int digit = sb[i] - '0';
            answer += digit * power;
            power *= 3;
        }

        return answer;
    }
}