using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int solution(int k, int[] tangerine) {
        int answer = 0;
        
        Dictionary<int,int> tangerineDict = new Dictionary<int,int>();
        
        for(int i=0;i<tangerine.Length;i++){
            if(tangerineDict.ContainsKey(tangerine[i])){
                tangerineDict[tangerine[i]]++;
            }
            else{
                tangerineDict[tangerine[i]] = 1;
            }
        }
        
        List<int> count = new List<int>(tangerineDict.Values);
        count.Sort((a,b) => b.CompareTo(a));
        
        int sum = 0;
        
        for(int i=0;i<count.Count;i++){
            sum += count[i];
            answer++;
            
            if(sum >= k){
                break;
            }
        }
        
        return answer;
    }
}