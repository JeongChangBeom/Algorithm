public class Solution {
    public int[] solution(int n, int m) {
        int[] answer = new int[2];
        
        answer[0] = gcd(n,m);
        answer[1] = (n*m)/answer[0];
        
        return answer;
    }
    
    public int gcd(int x, int y){
        if(y==0){
            return x;
        }
        else{
            return gcd(y,x%y);
        }
    }
}