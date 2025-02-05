using System.Collections.Generic;

public class Solution {
    public List<long> solution(long x, int n) {
        List<long> answer = new List<long>();
        
        long temp = x;
        
        for(int i=0;i<n;i++){
            answer.Add(x);
            x+=temp;
        }
        
        return answer;
    }
}