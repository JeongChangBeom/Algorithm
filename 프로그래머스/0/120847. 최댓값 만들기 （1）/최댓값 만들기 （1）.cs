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
        
        answer = list[list.Count-1] * list[list.Count-2];
        
        return answer;
    }
}