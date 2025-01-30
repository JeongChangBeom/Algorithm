using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int[] numbers) {
        int answer = 0;
        
        List<int> list = new List<int>();
        
        foreach(int num in numbers){
            list.Add(num);
        }
        
        list.Sort();
        
        if(list[list.Count-1]*list[list.Count-2] > list[0]*list[1]){
            answer = list[list.Count-1]*list[list.Count-2];
        }else{
            answer = list[0]*list[1];
        }
        
        return answer;
    }
}