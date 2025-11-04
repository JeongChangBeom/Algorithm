using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        if(n % 2 != 0){
            int temp = 0;
            
            for(int i=0;i<=n;i++){
                if(i % 2 != 0){
                    temp += i;
                }
            }
            
            answer = temp;
        }
        else{
            int temp = 0;
            
            for(int i=0;i<=n;i++){
                if(i % 2 == 0){
                    temp += (int)Math.Pow(i,2);    
                }                
            }
            
            answer = temp;
        }
        
        return answer;
    }
}