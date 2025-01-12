#include <string>
#include <vector>

using namespace std;

int Gcd(int a, int b)
{
    int A = max(a, b);
    int B = min(a, b);
    
    while(A % B != 0)
    {
        int R = A % B;
        A = B;
        B = R;
    }
    return B;
}

int solution(vector<int> arr) {
    int answer = arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        int GCD = Gcd(answer, arr[i]);
        int LCM = answer * arr[i] / GCD;
        answer = LCM;
    }

    return answer;
}