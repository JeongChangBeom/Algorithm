using System;
using System.Linq;

public class Solution {
    public int solution(string[,] book_time) {
        int answer = 0;
        
        int[] useRoom = new int[1500];
        
        int start = 0;
        int end = 0;
        
        for(int i=0;i<book_time.GetLength(0);i++){
            string[] startString = book_time[i,0].Split(":");
            string[] endString = book_time[i,1].Split(":");
            
            
            start = int.Parse(startString[0]) * 60 + int.Parse(startString[1]);
            end = int.Parse(endString[0]) * 60 + int.Parse(endString[1]) + 10;
            
            for(int j=start;j<end;j++){
                useRoom[j]++;
            }
        }
        
        return useRoom.Max();
    }
}