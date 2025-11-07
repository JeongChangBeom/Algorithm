using System;

class Solution 
{
    public int BinaryOneCount(int x){
        string binary = Convert.ToString(x,2);
        int count = 0;
        
        for(int i=0;i<binary.Length;i++){
            if(binary[i] == '1'){
                count++;
            }
        }     
        
        return count;
    }
    
    public int solution(int n) 
   {
        int answer = 0;
        
        int nCount = BinaryOneCount(n);
        
        while(true){
            n++;
            int tempCount = BinaryOneCount(n);
            
            if(nCount == tempCount){
                answer = n;
                break;
            }
        } 
        
        return answer;
    }
}