using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int[] sides) {
        int answer = 0;
        
        List<int> list = new List<int>();
        
        for(int i=0;i<sides.Length;i++){
            list.Add(sides[i]);
        }
        
        list.Sort();
        
        if(list[2] < list[0]+list[1]){
            answer = 1;
        }
        else{
            answer = 2;
        }
        
        return answer;
    }
}