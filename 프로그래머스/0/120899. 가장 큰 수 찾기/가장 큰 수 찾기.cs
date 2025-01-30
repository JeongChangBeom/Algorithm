using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] array) {
        int[] answer = new int[2];
    
        int max = -2147483648;
        int index = 0;
        
        for(int i=0;i<array.Length;i++){
            if(array[i] > max){
                max = array[i];
                index = i;
            }
        }
        
        answer[0] = max;
        answer[1] = index;
        
        return answer;
    }
}