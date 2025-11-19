using System;

public class Solution {
    public void DFS(int node, int n, int[,] graph, bool[] visited){
        visited[node] = true;
        
        for(int i=0;i<n;i++){
            if(i != node && graph[node,i] == 1 && visited[i] == false){
                DFS(i,n,graph,visited);
            }
        }
    }
    
    public int solution(int n, int[,] computers) {
        int answer = 0;
        bool[] visited = new bool[n];
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                DFS(i,n,computers,visited);
                answer++;
            }
        }
        return answer;
    }
}