using System.Text;

public class Solution {
    public string solution(string s) {
        StringBuilder sb = new StringBuilder();
        int index = 0;
        
        for(int i=0;i<s.Length;i++){
            if(s[i] == ' '){
                sb.Append(' ');
                index = 0;
            }
            else{
                if(index % 2 == 0){
                    sb.Append(char.ToUpper(s[i]));
                }
                else{
                    sb.Append(char.ToLower(s[i]));
                }
            
                index++;
            }
            
        }
        
        return sb.ToString();
    }
}