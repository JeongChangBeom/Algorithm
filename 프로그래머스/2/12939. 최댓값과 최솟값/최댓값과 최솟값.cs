using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public string solution(string s) {
        string answer = "";
        
        List<int> partsList = 
            s.Split(' ')
            .Select(int.Parse)
            .ToList();
        
        partsList.Sort();
        
        answer = $"{partsList.First()} {partsList.Last()}";
        
        return answer;
    }
}