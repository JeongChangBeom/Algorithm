using System;
using System.Collections.Generic;

public class Solution {
    public List<int> solution(int[] progresses, int[] speeds) {
        List<int> answer = new List<int>();
        
        Queue<int> q = new Queue<int>();
        
        for(int i=0;i<progresses.Length;i++){
            int count = 0;
            
            while(true){
                if(progresses[i]<100){
                    count++;
                    progresses[i] += speeds[i];
                }
                else{
                    q.Enqueue(count);
                    break;
                }
            }
        }
        
        while(q.Count != 0){
            int day = q.Peek();
            q.Dequeue();
            
            int result = 1;
            
            while(q.Count != 0 && q.Peek() <= day){
                result++;
                q.Dequeue();
            }
            answer.Add(result);
        }
        
        return answer;
    }
}