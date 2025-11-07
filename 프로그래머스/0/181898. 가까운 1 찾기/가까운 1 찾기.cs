using System;

public class Solution {
    public int solution(int[] arr, int idx) {
        int answer = 0;
        
        for(int i=idx;i<arr.Length;i++){
            if(arr[i] == 1){
                answer = i;
                break;
            }
            else{
                answer = -1;
            }
        }
        
        return answer;
    }
}