using System;
using System.Linq;

public class Solution {
    public int solution(string my_string, string target) {
        int answer = 0;
        
        if(my_string.Contains(target)){
            answer = 1;
        }
        else{
            answer = 0;
        }
        
        return answer;
    }
}