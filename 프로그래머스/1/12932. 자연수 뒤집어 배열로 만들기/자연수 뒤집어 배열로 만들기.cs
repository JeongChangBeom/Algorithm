using System.Collections.Generic;

public class Solution {
    public List<int> solution(long n) {
        List<int> answer = new List<int>();
        
        string num = n.ToString();
        
        for(int i=num.Length-1;i>=0;i--){
            answer.Add(num[i]-'0');
        }
        
        return answer;
    }
}