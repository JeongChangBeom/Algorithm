using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public string[] solution(string[] strArr) {
        string[] answer = new string[] {};
        
        List<string> resultList = new List<string>();
        
        for(int i=0;i<strArr.Length;i++){
            if(!strArr[i].Contains("ad")){
                resultList.Add(strArr[i]);
            }
        }
        
        answer = resultList.ToArray();
        
        return answer;
    }
}