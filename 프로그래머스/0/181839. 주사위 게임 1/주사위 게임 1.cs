using System;

public class Solution {
    
    public bool isOdd(int x){
        if(x % 2 != 0){
            return true;
        }
        else{
            return false;
        }
    }
    
    public int solution(int a, int b) {
        int answer = 0;
        
        if(isOdd(a) && isOdd(b)){
            answer = a*a + b*b;
        }
        else if(isOdd(a) || isOdd(b)){
            answer = 2*(a+b);
        }
        else{
            answer = (int)Math.Abs(a-b);
        }
        
        return answer;
    }
}