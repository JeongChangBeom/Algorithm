using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] arr, int[,] intervals) {
        int[] answer = new int[] {};
        
        List<int> resultList = new List<int>();
        
        for(int i=intervals[0,0];i<=intervals[0,1];i++){
            resultList.Add(arr[i]);
        }
        
        for(int i=intervals[1,0];i<=intervals[1,1];i++){
            resultList.Add(arr[i]);
        }
        
        answer = resultList.ToArray();
        
        return answer;
    }
}