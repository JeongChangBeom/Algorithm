using System;

public class Solution {
    public int solution(int a, int b, int c) {
        int answer = 0;
        
        int num_1 = a+b+c;
        int num_2 = a*a + b*b + c*c;
        int num_3 = a*a*a + b*b*b + c*c*c;
        
        if(a == b && b == c){
            answer = num_1 * num_2 * num_3;
        }
        else if(a == b || b == c || c == a){
            answer = num_1 * num_2;
        }
        else{
            answer = num_1;
        }
        
        return answer;
    }
}