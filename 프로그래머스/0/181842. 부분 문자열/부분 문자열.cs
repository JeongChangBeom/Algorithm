using System;
using System.Linq;

public class Solution {
    public int solution(string str1, string str2) {
        int answer = 0;
        
        if(str2.Contains(str1)){
            answer = 1;
        }
        else{
            answer = 0;
        }
        
        return answer;
    }
}