using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int[] solution(string[] operations) {
        List<int> list = new List<int>();
        
        foreach(var op in operations){
            var input = op.Split();
            
            string cmd = input[0];
            int num = int.Parse(input[1]);
            
            if(cmd == "I"){
                list.Add(num);
            }
            else if(cmd == "D"){
                if(list.Count == 0){
                    continue;
                }
                else{
                    list.Sort();
                    
                    if(num == 1){
                        list.RemoveAt(list.Count-1);
                    }
                    else{
                        list.RemoveAt(0);
                    }
                }
            }
        }
        
        if(list.Count == 0){
            return new int[] {0,0};
        }
        else{
            list.Sort();
            return new int[] {list[list.Count-1], list[0]};
        }
    }
}