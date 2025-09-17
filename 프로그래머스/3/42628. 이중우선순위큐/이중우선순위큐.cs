using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string[] operations) {
        int[] answer = new int[] {};
        
        var maxpq = new PriorityQueue<int,int>(Comparer<int>.Create((a,b) => b.CompareTo(a)));
        var minpq = new PriorityQueue<int,int>();
        
        return answer;
    }
}