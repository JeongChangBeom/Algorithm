using System.Collections.Generic;

public class Solution {
    public List<int> solution(int[] arr) {
        List<int> answer = new List<int>();
        
        int min = 2147483647;
        
        for(int i=0;i<arr.Length;i++){
            if(arr[i] < min){
                min = arr[i];
            }
        }
        
        for(int i=0;i<arr.Length;i++){
            if(arr[i] == min){
                continue;
            }
            
            answer.Add(arr[i]);
        }
        
        if(answer.Count == 0){
            answer.Add(-1);
        }
        
        return answer;
    }
}