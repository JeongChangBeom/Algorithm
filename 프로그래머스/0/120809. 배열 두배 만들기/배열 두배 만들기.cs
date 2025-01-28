using System;

public class Solution {
    public int[] solution(int[] numbers) {
        int[] answer = new int[numbers.Length];
        
        for(int i=0;i<numbers.Length;i++){
            answer[i] = numbers[i]*2;
        }
            
        return answer;
    }
}