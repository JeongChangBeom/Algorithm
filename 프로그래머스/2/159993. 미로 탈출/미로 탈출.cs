using System;
using System.Collections.Generic;

public class Solution {
    class Node{
        public int x;
        public int y;
        public int dist;
        
        public Node(int x, int y, int dist){
            this.x = x;
            this.y = y;
            this.dist = dist;
        }
    }
    
    int[] dx = {1,-1,0,0};
    int[] dy = {0,0,1,-1};
    
    public int solution(string[] maps) {
        int n = maps.Length;
        int m = maps[0].Length;
        
        int start_X = 0;
        int start_Y = 0;
        
        int lever_X = 0;
        int lever_Y = 0;
        
        int exit_X = 0;
        int exit_Y = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(maps[i][j] == 'S'){
                    start_X = i;
                    start_Y = j;
                }
                else if(maps[i][j] == 'L'){
                    lever_X = i;
                    lever_Y = j;
                }
                else if(maps[i][j] == 'E'){
                    exit_X = i;
                    exit_Y = j;
                }
            }
        }
        
        int toLever = BFS(start_X,start_Y,lever_X,lever_Y,maps);
        if(toLever == -1){
            return -1;
        }
        
        int toExit = BFS(lever_X,lever_Y,exit_X,exit_Y,maps);
        if(toExit == -1){
            return -1;
        }
        
        return toLever + toExit;
    }
    
    private int BFS(int start_X, int start_Y, int end_X, int end_Y, string[] maps){
        int n = maps.Length;
        int m = maps[0].Length;
        
        bool[,] visited = new bool[n,m];
        Queue<Node> queue = new Queue<Node>();
        
        queue.Enqueue(new Node(start_X, start_Y, 0));
        visited[start_X, start_Y] = true;
        
        while(queue.Count > 0){
            Node cur = queue.Dequeue();
            
            if(cur.x == end_X && cur.y == end_Y){
                return cur.dist;
            }
            
            for(int i=0;i<4;i++){
                int next_X = cur.x + dx[i];
                int next_Y = cur.y + dy[i];
                
                if(next_X < 0 || next_Y < 0 || next_X >= n || next_Y >= m){
                    continue;
                }
                
                if(visited[next_X, next_Y]){
                    continue;
                }
                if(maps[next_X][next_Y] == 'X'){
                    continue;
                }
                
                visited[next_X, next_Y] = true;
                queue.Enqueue(new Node(next_X, next_Y, cur.dist + 1));
            }
        }
        
        return -1;
    }
}









