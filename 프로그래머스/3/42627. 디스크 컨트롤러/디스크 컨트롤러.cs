using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int solution(int[,] jobs) {
        var jobList = new List<(int requireTime, int durationTime)>();
        
        for(int i=0;i<jobs.GetLength(0);i++){
            jobList.Add((jobs[i,0],jobs[i,1]));
        }
        
        jobList = jobList.OrderBy(j=>j.requireTime).ToList();
        
        int curTime = 0;
        int index = 0;
        int sum = 0;
        
        var waitingQueue = new List<(int requireTime, int durationTime)>();
        
        while (index < jobs.GetLength(0) || waitingQueue.Count > 0){
            while(index < jobs.GetLength(0) && jobList[index].requireTime <= curTime){
                waitingQueue.Add(jobList[index]);
                index++;
            }
            
            if(waitingQueue.Count > 0){
                waitingQueue.Sort((a,b) => a.durationTime.CompareTo(b.durationTime));
                var (requireTime, durationTime) = waitingQueue[0];
                waitingQueue.RemoveAt(0);
                
                curTime += durationTime;
                sum += curTime - requireTime;
            }
            else{
                curTime = jobList[index].requireTime;
            }
        }
        
        return sum / jobs.GetLength(0);
    }
}