using System;

public class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        
        int num_1 = num_list[0];
        int num_2 = num_list[0];
        
        for(int i=1;i<num_list.Length;i++){
            num_1 += num_list[i];
            num_2 *= num_list[i];
        }
        
        num_1 = (int)Math.Pow(num_1, 2);
        
        if(num_1 > num_2){
            answer = 1;
        }
        else{
            answer = 0;
        }
        
        return answer;
    }
}