using System;
using System.Collections.Generic;

public class Solution {
    public List<int> solution(int n, int[] numlist) {
        List<int> answer = new List<int>();
        
        foreach(int num in numlist){
            if(num%n == 0){
                answer.Add(num);
            }
        }
        
        return answer;
    }
}