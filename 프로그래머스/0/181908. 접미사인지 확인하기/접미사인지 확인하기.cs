using System;

public class Solution {
    public int solution(string my_string, string is_suffix) {
        int answer = 0;
        
        if (is_suffix.Length > my_string.Length){
            return 0;
        }
        
        int start = my_string.Length - is_suffix.Length;
        int end = is_suffix.Length;
        
        string temp = my_string.Substring(start, end);
        
        if(temp == is_suffix){
            answer = 1;
        }
        else{
            answer = 0;
        }
        
        return answer;
    }
}