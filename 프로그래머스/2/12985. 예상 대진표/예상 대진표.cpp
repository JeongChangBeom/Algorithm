#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;

    while(a != b){
        if(a%2 == 1){
            a++;
        }
        if(b%2 == 1){
            b++;
        }
        
        a/=2;
        b/=2;
        answer++;
    }

    return answer;
}