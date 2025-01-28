using System;

public class Solution {
    public string solution(string my_string) {
        string answer = "";
        
        for(int i=0;i<my_string.Length;i++){
            if(my_string[i] >= 'A' && my_string[i] <= 'Z'){
                answer += my_string[i].ToString().ToLower();
            }
            else{
                answer += my_string[i].ToString().ToUpper();
            }
        }
        
        return answer;
    }
}