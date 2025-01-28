using System;

public class Solution {
    public int solution(int slice, int n) {
        int answer = 0;
        
        int pizza = slice;
        
        while(true){
            if(pizza/n >= 1){
                answer++;
                break;
            }
            
            answer++;
            pizza += slice;
        }
        
        return answer;
    }
}