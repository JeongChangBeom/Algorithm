using System;

public class Solution {
    public string solution(string my_string, int n) {
        string answer = "";
        
        answer = my_string.Substring(my_string.Length - n, n);
        
        return answer;
    }
}