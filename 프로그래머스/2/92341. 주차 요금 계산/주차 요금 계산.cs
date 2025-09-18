using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int[] solution(int[] fees, string[] records) {
        int baseTime = fees[0];
        int basePrice = fees[1];
        int unitTime = fees[2];
        int unitPrice = fees[3];
        
        Dictionary<string, int> inTime = new Dictionary<string, int>();
        Dictionary<string, int> totalTime = new Dictionary<string, int>();
        
        foreach(var record in records){
            string[] parts = record.Split();
            string[] hm = parts[0].Split(":");
            
            int time = int.Parse(hm[0]) * 60 + int.Parse(hm[1]);
            
            string number = parts[1];
            string cmd = parts[2];
            
            if(cmd == "IN"){
                inTime[number] = time;
            }
            else{
                if(!totalTime.ContainsKey(number)){
                    totalTime[number] = 0;
                }
                totalTime[number] += time - inTime[number];                  
                inTime.Remove(number);
            }
        }
        
        foreach(var remain in inTime){
            if(!totalTime.ContainsKey(remain.Key)){
                totalTime[remain.Key] = 0;
            }
            
            totalTime[remain.Key] += (23*60 + 59) - remain.Value;
        }
        
        var result = totalTime.OrderBy(o => o.Key)
            .Select(o=>{
                int t = o.Value;
            
                if(t < baseTime){
                   return basePrice;
                }
            
                return basePrice+(int)Math.Ceiling((t-baseTime) / (double)unitTime) * unitPrice;
            })
            .ToArray();
        
        return result;
    }
}