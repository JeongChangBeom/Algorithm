using System;

public class Solution {
    public string solution(string my_string, int s, int e) {
        char[] arr = my_string.ToCharArray();
        
        int left = s;
        int right = e;
        
        while(left<right){
            char temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            
            left++;
            right--;
        }
        
        return new string(arr);
    }
}