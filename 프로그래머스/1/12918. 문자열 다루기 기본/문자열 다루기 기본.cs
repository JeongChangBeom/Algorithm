public class Solution {
    public bool solution(string s) {
        int length = s.Length;
        
        if(length != 4 && length != 6){
            return false;
        }
        
        for(int i=0;i<length;i++){
            if(s[i] < '0' || s[i] > '9'){
                return false;
            }
        }
        
        return true;
    }
}