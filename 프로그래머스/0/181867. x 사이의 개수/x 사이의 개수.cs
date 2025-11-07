using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string myString) {
        int[] answer = new int[] {};
        
        List<int> resultList = new List<int>();
        
        int count = 0;
        
        for(int i=0;i<myString.Length;i++){           
            if(myString[i] == 'x'){
                resultList.Add(count);
                count = 0;
            }
            else{
                count++;
            }
        }
        
        resultList.Add(count);
        
        answer = resultList.ToArray();
        
        return answer;
    }
}