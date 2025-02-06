public class Solution {
    public bool solution(int x) {
        bool answer = true;
        
        int temp = x;
        
        int sum = 0;
        
        while(true){
            if(temp<=0){
                break;
            }
            sum += temp%10;
            temp/=10;
        }
        
        if(x%sum == 0){
            answer = true;
        }
        else{
            answer = false;
        }
        
        return answer;
    }
}