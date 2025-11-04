using System;

public class Solution {
    public string solution(string n_str) {
        string answer = "";
        
        int index = 0;
        
        for(int i=0;i<n_str.Length;i++){
            if(n_str[i] == '0'){
                index++;
            }
            else{
                break;
            }
        }
        
        answer = n_str.Substring(index);
        
        return answer;
    }
}