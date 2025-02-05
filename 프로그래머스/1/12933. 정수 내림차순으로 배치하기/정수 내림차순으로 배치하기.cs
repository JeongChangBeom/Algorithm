using System.Collections.Generic;

public class Solution {
    public long solution(long n) {
        long answer = 0;
        
        List<int> list = new List<int>();
        
        string str = n.ToString();
        
        for(int i=0;i<str.Length;i++){
            list.Add(str[i] - '0');
        }
        
        list.Sort();
        list.Reverse();
        
        string temp = "";
        
        for(int i=0;i<list.Count;i++){
            temp += list[i];
        }
        
        answer = long.Parse(temp);
        
        return answer;
    }
}