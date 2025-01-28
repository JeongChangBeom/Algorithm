using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        int pizza = 6;
        
        while(true){
            if(pizza%n==0){
                answer++;
                break;
            }
            
            answer++;
            pizza += 6;
        }
        
        return answer;
    }
}