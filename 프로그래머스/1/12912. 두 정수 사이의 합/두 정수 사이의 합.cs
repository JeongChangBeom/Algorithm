using System.Collections.Generic;

public class Solution {
    public long solution(int a, int b) {
        long answer = 0;
        
        List<int> list = new List<int>();
        
        list.Add(a);
        list.Add(b);
        
        list.Sort();
        
        for(int i=list[0];i<=list[1];i++){
            answer += i;
        }
        
        return answer;
    }
}