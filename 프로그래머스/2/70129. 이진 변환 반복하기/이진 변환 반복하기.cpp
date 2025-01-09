#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    int count = 0;
    int zero = 0;
    
    while(s != "1"){
        count++;
        
        string temp = "";
        
        for(int i=0;i<s.size();i++){
            if(s[i] == '1'){
                temp += "1";
            }
            else if(s[i] == '0'){
                zero++;
            }
        }
        
        s = "";
        int num = temp.size();
        
        while(num){
            s += to_string(num % 2);
            num /= 2;
        }
    }
    
    answer.push_back(count);
    answer.push_back(zero);
    
    return answer;
}