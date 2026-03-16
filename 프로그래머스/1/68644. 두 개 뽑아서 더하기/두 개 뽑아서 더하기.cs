using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] numbers) {
         HashSet<int> set = new HashSet<int>();
        
        for(int i=0;i<numbers.Length;i++){
            for(int j=i+1;j<numbers.Length;j++){
                set.Add(numbers[i]+numbers[j]);
            }
        }
        
        List<int> list = new List<int>(set);
        list.Sort();
        return list.ToArray();
    }
}