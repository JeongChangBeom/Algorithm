using System;
using System.Collections.Generic;

public class Solution {
    public string[] solution(string[] strArr) {
        string[] answer = new string[] {};
        
        List<string> resultList = new List<string>();
        
        for(int i=0;i<strArr.Length;i++){
            if(i % 2 !=0){
                resultList.Add(strArr[i].ToUpper());
            }
            else{
                resultList.Add(strArr[i].ToLower());
            }
        }
        
        answer = resultList.ToArray();
        
        return answer;
    }
}