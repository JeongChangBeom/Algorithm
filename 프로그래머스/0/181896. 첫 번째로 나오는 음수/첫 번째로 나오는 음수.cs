using System;

public class Solution {
    public int solution(int[] num_list) {
        int answer = -1;
        
        for(int i=0;i<num_list.Length;i++){
            if(num_list[i] < 0){
                answer = i;
                break;
            }
        }
        
        return answer;
    }
}