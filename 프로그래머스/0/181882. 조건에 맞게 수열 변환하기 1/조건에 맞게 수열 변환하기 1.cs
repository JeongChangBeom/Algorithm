using System;

public class Solution {
    public int[] solution(int[] arr) {
        int[] answer = new int[] {};
        
        for(int i=0;i<arr.Length;i++){
            if(arr[i] >= 50){
                if(arr[i] % 2 == 0){
                    arr[i] /= 2;
                }
            }
            else{
                if(arr[i] % 2 != 0){
                    arr[i] *= 2;
                }
            }
        }
        
        answer = arr;
        
        return answer;
    }
}