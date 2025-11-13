using System;
using System.Collections.Generic;

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

class Solution {   
    private int[] dx = new int[] {-1,1,0,0};
    private int[] dy = new int[] {0,0,-1,1};
    
    public int solution(int[,] maps) {
        int n = maps.GetLength(0);
        int m = maps.GetLength(1);
        
        bool[,] visited = new bool[n,m];
        Queue<Node> q = new Queue<Node>();
        
        visited[0,0] = true;
        q.Enqueue(new Node(0,0,1));
        
        while(q.Count > 0){
            Node cur = q.Dequeue();
            
            if(cur.x == n -1 && cur.y == m-1){
                return cur.dist;
            }
            
            for(int i=0;i<4;i++){
                int nx = cur.x + dx[i];
                int ny = cur.y + dy[i];
                
                if(nx < 0 || ny < 0 || nx >= n || ny == m){
                    continue;
                }
                
                if(maps[nx,ny] == 0 || visited[nx,ny] == true){
                    continue;
                }
                
                visited[nx,ny] = true;
                q.Enqueue(new Node(nx,ny,cur.dist+1));
            }
        }
        
        return -1;
    }
}