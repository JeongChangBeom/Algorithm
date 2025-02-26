using System.Collections.Generic;

public class Solution {
    public string solution(string s) {
        string answer = "";
        
        List<char> list = new List<char>();
        
        for(int i=0;i<s.Length;i++){
            list.Add(s[i]);
        }
        
        list.Sort();
        list.Reverse();
        
        for(int i=0;i<s.Length;i++){
            answer += list[i];
        }
        
        return answer;
    }
}