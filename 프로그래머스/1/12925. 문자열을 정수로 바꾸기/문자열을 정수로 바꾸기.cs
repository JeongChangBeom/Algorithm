public class Solution {
    public int solution(string s) {
        int answer = 0;
        
        bool isPlus = true;
        
        string temp = "";
        
        for(int i=0;i<s.Length;i++){
            if(s[i] == '+'){
                continue;
            }
            else if(s[i] == '-'){
                isPlus = false;
            }
            else{
                temp += s[i];
            }
        }
        
        if(isPlus){
            answer = int.Parse(temp);
        }
        else{
            answer = int.Parse(temp) * -1;
        }
        
        return answer;
    }
}