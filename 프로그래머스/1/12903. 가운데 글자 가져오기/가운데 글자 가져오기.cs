using System.Text;

public class Solution {
    public string solution(string s) {
        StringBuilder sb = new StringBuilder();
        bool isOdd = false;
        int length = s.Length;
        
        if(length % 2 == 0){
            isOdd = false;
        }
        else{
            isOdd = true;
        }
        
        if(isOdd){
            sb.Append(s[length/2]);
        }
        else{
            sb.Append(s[length/2-1]);
            sb.Append(s[length/2]);
        }
        
        return sb.ToString();
    }
}