using System;

public class Solution {
    public string solution(string[] arr) {
        string answer = "";
        
        for(int i=0;i<arr.Length;i++){
            answer += arr[i];
        }
        
        return answer;
    }
}