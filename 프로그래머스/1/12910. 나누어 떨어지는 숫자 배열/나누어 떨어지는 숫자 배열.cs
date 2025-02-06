using System.Collections.Generic;

public class Solution {
    public List<int> solution(int[] arr, int divisor) {
        
        List<int> answer = new List<int>();
        
        for(int i=0;i<arr.Length;i++){
            if(arr[i] % divisor == 0){
                answer.Add(arr[i]);
            }
        }
        
        answer.Sort();
        
        if(answer.Count == 0){
            answer.Add(-1);
        }
        
        return answer;
    }
}