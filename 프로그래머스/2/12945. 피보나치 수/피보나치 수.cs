using System;

public class Solution {
    public int solution(int n) {        
        int[] dp = new int[n+1];
        
        const int MOD = 1234567;
        
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i=2;i<=n;i++){
            dp[i] = (int)(((long)dp[i-2] + dp[i-1]) % MOD); 
        }
        
        return dp[n] % MOD;
    }
}