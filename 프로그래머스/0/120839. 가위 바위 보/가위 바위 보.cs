using System;

public class Solution {
    public string solution(string rsp) {
        string answer = "";
        
        for(int i=0;i<rsp.Length;i++){
            if(rsp[i] == '0'){
                answer += '5';
            }
            else if(rsp[i] == '2'){
                answer += '0';
            }
            else{
                answer += '2';
            }
        }
        
        return answer;
    }
}