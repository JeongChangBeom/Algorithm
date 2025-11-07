using System;
using System.Collections.Generic;

public class Solution {
    public string solution(string s) {
        string answer = "";
        
        string[] parts = s.Split(' ');
        List<string> resultList = new List<string>();
        
        for(int i=0;i<parts.Length;i++){
            string str = parts[i];
            
            if (string.IsNullOrEmpty(str)) {
                resultList.Add(str);
                continue;
            }
            
            str = str.ToLower();
            
            if(str[0] >= '0' && str[0] <= '9'){
                resultList.Add(str);
                continue;
            }
            else{
                str = $"{str.Substring(0,1).ToUpper()}{str.Substring(1)}";
            }
            
            resultList.Add(str);
        }
        
        for(int i=0; i<resultList.Count;i++){
            if(i != 0){
                answer += " ";
            }
            
            answer += resultList[i];
        }
        
        return answer;
    }
}