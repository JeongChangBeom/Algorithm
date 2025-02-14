public class Solution {
    public string solution(string s) {
        string answer = "";
        
        bool isOdd = false;
        
        if(s.Length % 2 == 0){
            isOdd = false;
        }
        else{
            isOdd = true;
        }
        
        if(isOdd){
            answer += s[s.Length/2];
        }
        else{
            answer += s[s.Length/2-1];
            answer += s[s.Length/2];
        }
        
        return answer;
    }
}