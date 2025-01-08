#include <string>
#include <vector>

using namespace std;

int BinaryCount(int x){
    string num = "";
    int count = 0;
    
    while(x>0){
        num = to_string(x%2) + num;
        x/=2;
    }
    
    for(int i=0;i<num.size();i++){
        if(num[i] == '1'){
            count++;
        }
    }
    
    return count;
}

int solution(int n) {
    int answer = n+1;
    int temp = BinaryCount(n);
    
    while(BinaryCount(answer) != temp){
        answer++;
    }
    
    return answer;
}