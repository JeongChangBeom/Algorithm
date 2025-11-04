using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int n) {
        int[] answer = new int[] {};
        
        List<int> resultList = new List<int>();
        
        while(true){
            resultList.Add(n);
            
            if(n == 1){
                break;
            }
            
            if(n % 2 == 0){
                n = n / 2;
            }
            else{
                n = 3 * n + 1;
            }
        }
        
        answer = resultList.ToArray();
        
        return answer;
    }
}