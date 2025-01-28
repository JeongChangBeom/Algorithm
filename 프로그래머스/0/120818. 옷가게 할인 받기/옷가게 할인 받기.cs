using System;

public class Solution {
    public int solution(int price) {
        float answer = 0;
        
        if(price >= 100000 && price < 300000){
            answer = price - (price * ((float)5/100));
        }
        else if(price >= 300000 && price < 500000){
            answer = price - (price * ((float)10/100));
        }
        else if (price >= 500000){
            answer = price - (price * ((float)20/100));
        }
        else{
            answer = price;
        }
        
        return (int)answer;
    }
}