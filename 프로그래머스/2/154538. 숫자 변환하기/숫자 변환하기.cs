using System;
using System.Collections.Generic;

public class Solution {
    class Node{
        public int value;
        public int count;
        public Node(int value, int count){
            this.value = value;
            this.count = count;
        }
    }
    
    public int solution(int x, int y, int n) {
        Queue<Node> queue = new Queue<Node>();
        HashSet<int> visited = new HashSet<int>();
        
        queue.Enqueue(new Node(x,0));
        visited.Add(x);
        
        while(queue.Count > 0){
            Node curNode = queue.Dequeue();
            
            int curValue = curNode.value;
            int curCount = curNode.count;
            
            if(curValue == y){
                return curCount;
            }
            
            int[] calcValues = {curValue + n, curValue * 2, curValue * 3};
            
            foreach(int value in calcValues){
                if(value <= y && !visited.Contains(value)){
                    queue.Enqueue(new Node(value,curCount+1));
                    visited.Add(value);
                }
            }
        }
        
        return -1;
    }
}