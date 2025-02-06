public class Solution {
    public string solution(string[] seoul) {
        string answer = "";
        
        int loc = 0;
        
        for(int i=0;i<seoul.Length;i++){
            if(seoul[i] == "Kim"){
                loc = i;
                break;
            }
        }
        
        answer = "김서방은 " + loc + "에 있다";
        
        return answer;
    }
}