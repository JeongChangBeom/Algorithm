using System;

public class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        
        int num_1 = int.Parse($"{a}{b}");
        int num_2 = 2 * a * b;
        
        if(num_1 >= num_2){
            answer = num_1;
        }
        else{
            answer = num_2;
        }
        
        return answer;
    }
}