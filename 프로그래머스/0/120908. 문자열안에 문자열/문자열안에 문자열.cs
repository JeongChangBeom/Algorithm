using System;

public class Solution {
    public int solution(string str1, string str2) {
        int answer = 2;
        
        if(str1.Contains(str2)){
            answer = 1;
        }
        else{
            answer = 2;
        }
        
        return answer;
    }
}