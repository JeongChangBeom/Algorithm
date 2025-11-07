using System;

public class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        
        int num_1 = 0;
        int num_2 = 0;
        
        for(int i=0;i<num_list.Length;i++){
            if(i % 2 == 0){
                num_1 += num_list[i];
            }
            else{
                num_2 += num_list[i];
            }
        }
        
        if(num_1 > num_2){
            answer = num_1;
        }
        else{
            answer = num_2;
        }
        
        return answer;
    }
}