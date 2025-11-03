using System;
using System.Linq;

public class Solution {
    public int[] solution(int[] num_list, int n) {
        int[] answer = new int[] {};
        
        answer = num_list.Skip(n-1).ToArray();
        
        return answer;
    }
}