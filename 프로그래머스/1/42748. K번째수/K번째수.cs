using System;

public class Solution {
    public int[] solution(int[] array, int[,] commands) {
        int n = commands.GetLength(0);
        int[] answer = new int[n];
        
        for(int i=0;i<n;i++){
            int start = commands[i,0] - 1;
            int end = commands[i,1] - 1;
            int target = commands[i,2] - 1;
            
            int size = end - start + 1;
            int[] temp = new int[size];
            int index = 0;
            
            for(int j=start;j<=end;j++){
                temp[index] = array[j];
                index++;
            }
            
            Array.Sort(temp);
            
            answer[i] = temp[target];
        }
        
        return answer;
    }
}