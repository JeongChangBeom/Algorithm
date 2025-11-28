using System;

public class Solution {
    public int solution(int n, int[] lost, int[] reserve) {
        int answer = 0;
        
        int[] clothes = new int[n + 1];
        
        for(int i=0;i<lost.Length;i++){
            clothes[lost[i]]--;
        }
        
        for(int i=0;i<reserve.Length;i++){
            clothes[reserve[i]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(clothes[i] < 0){
                if(i-1 >= 1 && clothes[i-1] == 1){
                    clothes[i]++;
                    clothes[i-1]--;
                }
                else if(i+1 <= n && clothes[i+1] == 1){
                    clothes[i]++;
                    clothes[i+1]--;
                }
            }
        }
        
        for(int i=1;i<=n;i++){
            if(clothes[i] >= 0){
                answer++;
            }
        }    
        
        return answer;
    }
}