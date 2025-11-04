using System;

public class Solution {
    public int solution(string myString, string pat) {
        int answer = 0;
        
        string temp = myString.Replace('A','X')
            .Replace('B', 'A')
            .Replace('X', 'B');
        
        if(temp.Contains(pat)){
            answer = 1;
        }
        else{
            answer = 0;
        }
        
        return answer;
    }
}