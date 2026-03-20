using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int bridge_length, int weight, int[] truck_weights) {
        Queue<int> queue = new Queue<int>();
        
        int total_weights = 0;
        int truck_index = 0;
        int time = 0;
        
        while(true){
            if(truck_index == truck_weights.Length){
                time += bridge_length;
                break;
            }
            
            time++;
            
            if(queue.Count == bridge_length){
                total_weights -= queue.Dequeue();
            }
            
            if(total_weights + truck_weights[truck_index] <= weight){
                queue.Enqueue(truck_weights[truck_index]);
                total_weights += truck_weights[truck_index];
                truck_index++;
            }
            else{
                queue.Enqueue(0);
            }
        }
        
        return time;
    }
}