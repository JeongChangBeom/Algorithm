using System;
using System.Collections.Generic;
using System.Linq;

public class Process{
    public int index;
    public int priority;
    
    public Process(int index, int priority){
        this.index = index;
        this.priority = priority;
    }
}

public class Solution {
    public int solution(int[] priorities, int location) {
        Queue<Process> q = new Queue<Process>();
        
        int[] count = new int[10];
        
        for(int i=0;i<priorities.Length;i++){
            q.Enqueue(new Process(i,priorities[i]));
            count[priorities[i]]++;
        }
        
        int order = 0;
        int cur = 9;
        
        while(q.Count > 0){
            while(cur > 0 && count[cur] == 0){
                cur--;
            }
            
            Process now = q.Dequeue();
            
            if(now.priority == cur){
                count[now.priority]--;
                order++;
                
                if(now.index == location){
                    return order;
                }
            }
            else{
                q.Enqueue(now);
            }
        }
        
        return order;
    }
}