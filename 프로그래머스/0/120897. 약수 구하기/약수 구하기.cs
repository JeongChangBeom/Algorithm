using System;
using System.Collections.Generic;

public class Solution {
    public List<int> solution(int n) {
        List<int> answer = new List<int>();
        
        for(int i=1;i<=n;i++){
            if(n%i==0){
                answer.Add(i);
            }
        }
        
        return answer;
    }
}