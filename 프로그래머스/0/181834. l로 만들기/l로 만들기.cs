using System;

public class Solution {
    public string solution(string myString) {
        string answer = "";
        
        for(int i=0; i<myString.Length;i++){
            if(myString[i] < 'l'){
                answer += 'l';
            }
            else{
                answer += myString[i];
            }
        }
        
        return answer;
    }
}