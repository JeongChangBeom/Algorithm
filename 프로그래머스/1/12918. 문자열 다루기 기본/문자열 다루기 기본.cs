public class Solution {
    public bool solution(string s) {
        bool answer = true;
        
        if(s.Length == 4 || s.Length==6){
            for(int i=0;i<s.Length;i++){
                if('0'<=s[i] && s[i]<='9'){
                    continue;
                }
                else{
                    answer = false;
                }
            }
        }
        else{
            answer = false;
        }
        
        return answer;
    }
}