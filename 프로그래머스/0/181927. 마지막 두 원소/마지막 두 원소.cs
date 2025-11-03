using System;

public class Solution {
    public int[] solution(int[] num_list) {
        int[] answer = new int[num_list.Length+1];
        
        int num_1 = num_list[num_list.Length - 1];
        int num_2 = num_list[num_list.Length - 2];
        
        int result = 0;
        
        if(num_1 > num_2){
            result = num_1 - num_2;
        }
        else{
            result = num_1 * 2;
        }
        
        for(int i=0;i<num_list.Length;i++){
            answer[i] = num_list[i];
        }
        
        answer[answer.Length-1] = result;
        
        return answer;
    }
}