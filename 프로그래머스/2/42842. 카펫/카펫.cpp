#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int size = brown+yellow;
    
    for(int h = 3; h < size;h++){
        if((size % h) == 0){
            int w=size/h;
            
            if(((w-2) * (h-2)) == yellow){
                answer.push_back(w);
                answer.push_back(h);
                break;
            }
        }
    }
    
    return answer;
}