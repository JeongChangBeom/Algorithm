#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    map<string,int> m;
    
    for(int i=0;i<want.size();i++){
        m[want[i]] = number[i];
    }
    
    for(int i=0;i<discount.size()-9;i++){
        bool check = false;
        
        map <string,int> mtemp(m);
        
        for(int j=i;j<i+10;j++){
            mtemp[discount[j]]--;
        }
        
        for(int j=i;j<i+10;j++){
            for(auto it = mtemp.begin(); it != mtemp.end(); it++){
                if(it->second != 0){
                    check = true;
                    break;
                }
            }
        }
        
        if(!check){
            answer++;
        }
    }
    
    return answer;
}