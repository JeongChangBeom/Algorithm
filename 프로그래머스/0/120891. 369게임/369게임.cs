using System;

public class Solution {
    public int solution(int order) {
        int answer = 0;
        
        string temp = order.ToString();
        
        for(int i=0;i<temp.Length;i++){
            if(temp[i] == '3' || temp[i] == '6' || temp[i] == '9'){
                answer++;
            }
        }
        
        return answer;
    }
}