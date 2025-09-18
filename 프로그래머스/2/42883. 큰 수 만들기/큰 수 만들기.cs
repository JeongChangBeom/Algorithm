using System;
using System.Collections.Generic;

public class Solution {
    public string solution(string number, int k) {
        Stack<char> stack = new Stack<char>();
        
        foreach(char c in number){
            while(stack.Count != 0 && k>0 && stack.Peek() < c){
               stack.Pop();
               k--;
            }
            
            stack.Push(c);
        }
        
        while(k>0){
            stack.Pop();
            k--;
        }
        
        char[] result = stack.ToArray();
        Array.Reverse(result);
        return new string(result);
    }
}