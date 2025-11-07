using System;
using System.Linq;

public class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        
        if(num_list.Length > 10){
            answer = num_list.Sum();
        }
        else{
            answer = num_list.Aggregate(1, (a,b) => a*b);
        }
        
        return answer;
    }
}