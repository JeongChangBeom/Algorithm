using System;

public class Solution {
    public int solution(string my_string, string is_prefix) {
        int answer = 0;
        
        if(my_string.Length < is_prefix.Length){
            answer = 0;
            return answer;
        }
        
        string temp = my_string.Substring(0,is_prefix.Length);
        
        if(temp == is_prefix){
            answer = 1;
        }
        else{
            answer = 0;
        }
        
        return answer;
    }
}