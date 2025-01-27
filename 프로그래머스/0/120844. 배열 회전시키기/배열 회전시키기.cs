using System;

public class Solution {
    public int[] solution(int[] numbers, string direction) {
        int[] answer = new int[numbers.Length];
        
        if(direction == "right"){
            answer[0] = numbers[numbers.Length-1];
            
            for(int i=1;i<numbers.Length;i++){
                answer[i] = numbers[i-1];
            }
        }
        else{
            answer[numbers.Length-1] = numbers[0];
            
            for(int i=1;i<numbers.Length;i++){
                answer[i-1] = numbers[i];
            }
        }
        
        return answer;
    }
}