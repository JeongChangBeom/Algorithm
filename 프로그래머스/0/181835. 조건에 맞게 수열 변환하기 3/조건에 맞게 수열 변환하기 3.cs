using System;

public class Solution {
    public int[] solution(int[] arr, int k) {
        int[] answer = new int[] {};
        
        if(k % 2 != 0){
            for(int i=0;i<arr.Length;i++){
                arr[i] *= k;
            }
        }
        else{
            for(int i=0;i<arr.Length;i++){
                arr[i] += k;
            }
        }
        
        answer = arr;
        
        return answer;
    }
}