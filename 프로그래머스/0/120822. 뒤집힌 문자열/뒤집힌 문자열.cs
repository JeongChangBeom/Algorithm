using System;

public class Solution {
    public string solution(string my_string) {  
        char[] arr = my_string.ToCharArray();
        
        int left = 0;
        int right = my_string.Length - 1;
        
        while(left < right){
            char temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            
            left++;
            right--;
        }
        
        return new string(arr);
    }
}