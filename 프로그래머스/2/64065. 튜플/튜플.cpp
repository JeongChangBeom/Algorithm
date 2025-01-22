#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


bool compare(pair<int,int> x, pair<int,int> y){
    return x.second > y.second;
}

vector<int> solution(string s) {
    vector<int> answer;
    
    map<int,int> m;
    
    string str = "";
    
    for(int i=1;i<s.size()-1;i++){      
        if(s[i-1] == '{' || s[i-1] == '}' || s[i-1] == ','){
            str = "";
        }
        if(!str.empty() && (s[i] == '}' || s[i] == ',')){
            m[stoi(str)]++;
            str = "";
        }
        if(s[i-1] != '{' || s[i-1] != '}' || s[i-1] != ','){
            str += s[i];
        }
    }
       
    vector<pair<int,int>> v(m.begin(),m.end());
    
    sort(v.begin(),v.end(),compare);
    
    for(int i=0;i<v.size();i++){
        answer.push_back(v[i].first);
    }
    
    return answer;
}