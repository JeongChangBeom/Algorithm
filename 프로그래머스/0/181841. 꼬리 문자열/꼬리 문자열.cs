using System;
using System.Linq;

public class Solution {
    public string solution(string[] str_list, string ex) {
        string answer = "";
        
        for(int i=0;i<str_list.Length;i++){
            if(!str_list[i].Contains(ex)){
                answer += str_list[i];
            }
        }
        
        return answer;
    }
}