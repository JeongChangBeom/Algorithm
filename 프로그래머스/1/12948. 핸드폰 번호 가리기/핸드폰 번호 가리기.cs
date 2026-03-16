using System.Text;

public class Solution {
    public string solution(string phone_number) {
        StringBuilder sb = new StringBuilder();
        int length = phone_number.Length; 
        
        for(int i=0;i<length;i++){
            if(i < length-4){
                sb.Append('*');
            }
            else{
                sb.Append(phone_number[i]);
            }
        }
        
        return sb.ToString();
    }
}