using System;

public class Solution {
    public int solution(int[] numbers) {
        int answer = -1;
        
        bool[] arr = new bool[10];
        
        for(int i=0;i<numbers.Length;i++){
            arr[numbers[i]] = true;
        }
        
        int sum = 0;
        
        for(int i=0;i<arr.Length;i++){
            if(arr[i] == false){
                sum += i;
            }
        }
        
        answer = sum;
        
        return answer;
    }
}