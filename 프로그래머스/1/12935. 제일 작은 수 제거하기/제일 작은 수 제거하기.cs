using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] arr) {
        int length = arr.Length;
        
        if(length == 1){
            return new int[] {-1};
        }
        
        int min = arr[0];
        
        for(int i=1;i<length;i++){
            if(arr[i] < min){
                min = arr[i];
            }
        }
        
        List<int> list = new List<int>();
        
        for(int i=0;i<length;i++){
            if(arr[i] != min){
                list.Add(arr[i]);
            }
        }
        
        return list.ToArray();
    }
}