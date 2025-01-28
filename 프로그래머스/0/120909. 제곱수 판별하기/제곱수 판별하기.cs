using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        if(Math.Sqrt(n)%1 == n%1){
            answer = 1;
        }
        else{
            answer = 2;
        }
        
        return answer;
    }
}