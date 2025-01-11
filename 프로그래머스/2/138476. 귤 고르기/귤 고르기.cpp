#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int x, int y){
    return x > y;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    vector<int> v(10000001);
    
    for(int i=0;i<tangerine.size();i++){
        v[tangerine[i]]++;
    }
    
    sort(v.begin(),v.end(),compare);
    
    for(int i=0;i<v.size();i++){       
        if(k <= 0){
            break;
        }
        answer++;
        k -= v[i];
    }
    
    return answer;
}