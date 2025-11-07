using System;
using System.Linq;

public class Solution {
    public int solution(string myString, string pat) {
        int answer = 0;
        
        string tempStr = myString.ToUpper();
        string tempPat = pat.ToUpper();
        
        if(tempStr.Contains(tempPat)){
            answer = 1;
        }
        else{
            answer = 0;
        }
        
        return answer;
    }
}