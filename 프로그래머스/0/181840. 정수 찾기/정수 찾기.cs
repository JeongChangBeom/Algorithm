using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int solution(int[] num_list, int n) {
        int answer = 0;
        
        List<int> tempList = new List<int>();
        tempList = num_list.ToList();
        
        if(tempList.Contains(n)){
            answer = 1;
        }
        else{
            answer = 0;
        }
        
        return answer;
    }
}