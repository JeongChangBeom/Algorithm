using System;
using System.Collections.Generic;

public class Solution {
    public long solution(int n, int[] times) {
        Array.Sort(times);
        
        long start = 1;
        long end = (long)times[times.Length-1] * n;
        long answer = end;
        
        while(start <= end){
            long mid = (start + end)/ 2;
            long count = 0;
            
            for(int i=0;i<times.Length;i++){
                count += mid / times[i];
            }
            
            if(count >= n){
                answer = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        
        return answer;
    }
}