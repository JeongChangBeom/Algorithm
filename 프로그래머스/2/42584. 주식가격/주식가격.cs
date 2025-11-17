using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] prices) {
        int n = prices.Length;
        int[] answer = new int[n];  
        Stack<int> stack = new Stack<int>();
        
        for(int i=0;i<n;i++){
            while(stack.Count > 0 && prices[i] < prices[stack.Peek()]){
                int index = stack.Pop();
                answer[index] = i - index;
            }
            stack.Push(i);
        }
        
        while(stack.Count > 0){
            int index = stack.Pop();
            answer[index] = n -1 - index;
        }
        
        return answer;
    }
}