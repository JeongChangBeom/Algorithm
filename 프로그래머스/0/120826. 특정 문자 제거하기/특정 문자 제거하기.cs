using System;

public class Solution {
    public string solution(string my_string, string letter) {
        string answer = "";
        
        for(int i=0;i<my_string.Length;i++){
            if(my_string[i] != letter[0]){
                answer += my_string[i];
            }
        }
        
        return answer;
    }
}