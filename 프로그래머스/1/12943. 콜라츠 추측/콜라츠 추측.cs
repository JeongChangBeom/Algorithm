public class Solution {
    public int solution(int num) {
        int answer = 0;
        
        long temp = num;        
        
        while(true){
            if(temp == 1){
                break;
            }
            
            answer++;
            
            if(temp % 2 == 0){
                temp /= 2;
            }
            else{
                temp = temp*3+1;
            }
            
            if(answer > 500){
                return -1;
            }
        } 
        
        return answer;
    }
}