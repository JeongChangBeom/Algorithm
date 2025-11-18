using System;
using System.Collections.Generic;

public class Solution {
    int[,] graph;
    bool[,] visited;
    int row;
    int col;
    
    int[] dx = new int[] {1,-1,0,0};
    int[] dy = new int[] {0,0,1,-1};
    
    public int DFS(int x, int y){
        visited[x,y] = true;
        int sum = graph[x,y];
        
        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 0 || nx >= row || ny < 0 || ny >= col){
                continue;
            }
            
            if(graph[nx,ny] == 0){
                continue;
            }
            
            if(visited[nx,ny] == true){
                continue;
            }
            
            sum += DFS(nx, ny);
        }
        return sum;
    }
    
    public int[] solution(string[] maps) {
        row = maps.Length;
        col = maps[0].Length;
        graph = new int[row,col];
        visited = new bool[row,col];

        List<int> resultList = new List<int>();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                char num = maps[i][j];
                
                if(num == 'X'){
                    graph[i,j] = 0;
                }
                else{
                    graph[i,j] = num - '0';
                }
            }
        }
        
        int[] dx = new int[] {1,-1,0,0};
        int[] dy = new int[] {0,0,1,-1};
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(graph[i,j] > 0 && visited[i,j] == false){
                    int sum = DFS(i,j);
                    resultList.Add(sum);
                }
            }
        }
        
        if(resultList.Count == 0){
            return new int[] {-1};
        }
        else{
            resultList.Sort();
            return resultList.ToArray();
        }
    }
}