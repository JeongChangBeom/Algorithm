using System;

public class Solution {
    public int solution(int[] a, int[] b) {
        int answer = 1234567890;
        
        int sum = 0;
        
        for(int i=0;i<a.Length;i++){
            sum += a[i] * b[i];
        }
        
        answer = sum;
        
        return answer;
    }
}