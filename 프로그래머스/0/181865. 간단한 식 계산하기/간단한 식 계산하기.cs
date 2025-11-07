using System;

public class Solution {
    public int solution(string binomial) {
        int answer = 0;
        
        string[] part = binomial.Split(' ');
        
        int num_1 = int.Parse(part[0]);
        string op = part[1];
        int num_2 = int.Parse(part[2]);
        
        switch(op){
            case "+":
                answer = num_1 + num_2;
                break;
            case "-":
                answer = num_1 - num_2;
                break;
            case "*":
                answer = num_1 * num_2;
                break;
        }
        
        return answer;
    }
}