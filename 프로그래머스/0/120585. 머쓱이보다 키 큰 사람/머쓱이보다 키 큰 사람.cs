using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int[] array, int height) {
        int answer = 0;
        
        List<int> list = new List<int>();
        
        foreach(int num in array){
            list.Add(num);
        }
        
        list.Add(height);
        
        list.Sort();
        
        for(int i=0;i<list.Count;i++){
            if(list[i] == height){
                answer = list.Count-(i+1);
            }
        }
        
        return answer;
    }
}