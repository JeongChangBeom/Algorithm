using System;
using System.Collections.Generic;

public class Solution {
    public bool solution(string str) {
        bool answer = true;
        
        Stack<int> s = new Stack<int>();
        
        for(int i=0;i<str.Length;i++){
            if(s.Count == 0){
                s.Push(str[i]);
            }
            else{
                if(str[i] == '('){
                    s.Push(str[i]);
                }
                else{
                    if(s.Peek() == '('){
                        s.Pop();
                    }
                }
            }
        }
        
        if(s.Count != 0){
            answer = false;
        }
        
        return answer;
    }
}