using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int[] solution(int[] arr, int[] delete_list) {
        int[] answer = new int[] {};
        
        List<int> resultList = new List<int>();
        
        for(int i=0;i<arr.Length;i++){
            if(!delete_list.Contains(arr[i])){
                resultList.Add(arr[i]);
            }
        }
        
        answer = resultList.ToArray();
        
        return answer;
    }
}