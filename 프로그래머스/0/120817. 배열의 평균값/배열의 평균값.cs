using System;

public class Solution {
    public double solution(int[] numbers) {
        double answer = 0;
        
        double sum = 0;
        
        foreach(int num in numbers){
            sum += num;
        }
        
        answer = sum/numbers.Length;
        
        return answer;
    }
}