using System;

public class Solution {
    public int solution(int[,] sizes) {
        int answer = 0;
        
        int h = 0;
        int w = 0;
        
        for(int i=0;i<sizes.GetLength(0);i++){
            if(sizes[i,0] > sizes[i,1]){
                h = Math.Max(h, sizes[i,0]);
                w = Math.Max(w, sizes[i,1]);
            }
            else{
                h = Math.Max(h, sizes[i,1]);
                w = Math.Max(w, sizes[i,0]);
            }
        }
        
        answer = h*w;
        
        return answer;
    }
}