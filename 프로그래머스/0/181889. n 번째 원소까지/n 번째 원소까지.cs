using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] num_list, int n) {
        int[] answer = new int[] {};
        
        List<int> resultList = new List<int>();
        
        for(int i=0;i<n;i++){
            resultList.Add(num_list[i]);
        }
        
        answer = resultList.ToArray();
        
        return answer;
    }
}