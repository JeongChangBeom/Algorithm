using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] answers) {
        int[] one = {1,2,3,4,5};
        int[] two = {2,1,2,3,2,4,2,5};
        int[] three = {3,3,1,1,2,2,4,4,5,5};
        
        int oneCount = 0;
        int twoCount = 0;
        int threeCount = 0;
        
        for(int i=0;i<answers.Length;i++){
            if(answers[i] == one[i % one.Length]){
                oneCount++;
            }
            
            if(answers[i] == two[i % two.Length]){
                twoCount++;
            }
            
            if(answers[i] == three[i % three.Length]){
                threeCount++;
            }
        }
        
        int maxScore = Math.Max(oneCount, Math.Max(twoCount, threeCount));
        
        List<int> resultList = new List<int>();
        
        if(maxScore == oneCount){
            resultList.Add(1);
        }
        
        if(maxScore == twoCount){
            resultList.Add(2);
        }
        
        if(maxScore == threeCount){
            resultList.Add(3);
        }
        
        return resultList.ToArray();
    }
}