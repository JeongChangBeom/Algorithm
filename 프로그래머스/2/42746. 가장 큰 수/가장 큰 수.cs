using System;
using System.Collections.Generic;

public class Solution {
    public string solution(int[] numbers) {
        List<string> resultList = new List<string>();
        
        for(int i=0;i<numbers.Length;i++){
            resultList.Add(numbers[i].ToString());
        }
        
        resultList.Sort((x,y) => (y+x).CompareTo(x+y));
        
        string answer = string.Join("",resultList);
        
        if(answer[0] == '0'){
            return "0";
        }
        
        return answer;
    }
}