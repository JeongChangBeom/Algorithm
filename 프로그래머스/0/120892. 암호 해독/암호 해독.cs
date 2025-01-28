using System;

public class Solution {
    public string solution(string cipher, int code) {
        string answer = "";
        
        int count = code; 
        
        while(true){
            if(count > cipher.Length){
                break;
            }
            
            answer += cipher[count-1];
            count += code;
        }
        
        return answer;
    }
}