using System;
using System.Collections.Generic;

public class Solution {
    public List<int> solution(string my_string) {
        List<int> answer = new List<int>();
        
        for(int i=0;i<my_string.Length;i++){
            if(my_string[i] >= '0' && my_string[i] <= '9'){
                answer.Add(my_string[i]-'0'); 
            }
        }
        
        answer.Sort();
        
        return answer;
    }
}