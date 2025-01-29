using System;

public class Solution {
    public string solution(string my_string) {
        string answer = "";
        
        string temp = "";
        
        char[] c = new char[my_string.Length];
        
        temp = my_string.ToLower();
        
        for(int i=0;i<my_string.Length;i++){
            c[i] = temp[i];
        }
        
        Array.Sort(c);
        
        for(int i=0;i<my_string.Length;i++){
            answer += c[i];
        }
        
        return answer;
    }
}