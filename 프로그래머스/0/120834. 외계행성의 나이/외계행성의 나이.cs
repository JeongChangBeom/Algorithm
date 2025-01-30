using System;

public class Solution {
    public string solution(int age) {
        string answer = "";
        
        string temp = age.ToString();
        
        for(int i=0;i<temp.Length;i++){
            answer += Convert.ToChar(temp[i]+('a'-'0'));
        }     
        return answer;
    }
}