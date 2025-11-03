using System;

public class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        
        string num_1 = "";
        string num_2 = "";
        
        for(int i=0;i<num_list.Length;i++){
            if(num_list[i] % 2 != 0){
                num_1 += num_list[i].ToString();
            }
            else{
                num_2 += num_list[i].ToString();
            }
        }
        
        answer = int.Parse(num_1) + int.Parse(num_2);
        
        return answer;
    }
}