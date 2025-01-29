using System;

public class Solution {
    public string solution(string my_string) {
        string answer = "";
        
        for(int i=0;i<my_string.Length;i++){
            if(my_string[i] == 'a' || my_string[i] == 'e' ||
              my_string[i] == 'i' || my_string[i] == 'o' ||
              my_string[i] == 'u'){
                continue;
            }
            else{
                answer += my_string[i];
            }
        }
        
        return answer;
    }
}