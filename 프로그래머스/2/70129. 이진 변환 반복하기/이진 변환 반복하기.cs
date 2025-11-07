using System;
using System.Collections.Generic;

public class Solution {    
    public string RemoveX(string str, out int count){
        string temp = "";
        count = 0;
        
        for(int i=0;i<str.Length;i++){
            if(str[i] == '1'){
                temp += "1";
            }
            else{
                count++;
            }
        }
        return temp;
    }
    
    public string LengthToBinary(string str){
        int len = str.Length;
        return Convert.ToString(len,2);
    }
    
    public int[] solution(string s) {
        int changeCount = 0;
        int zeroCount = 0;
        
        while(s != "1"){
            int count;
            s = RemoveX(s, out count);
            zeroCount += count;

            s = LengthToBinary(s); 
            changeCount++;
        }
        
        return new int[] { changeCount, zeroCount };
    }
}