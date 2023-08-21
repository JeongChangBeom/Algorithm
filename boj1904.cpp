//boj1904��_01Ÿ��_dp

#include <iostream>
#include <algorithm>

using namespace std;

int dp[1000001];
int tile[1000001];

int main() {
	int N;
	cin >> N;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	dp[4] = 5;


	for (int i = 5; i <= N; i++) {
		dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
	}
	cout << dp[N];
}
//dp ����. ��Ģ���� ã�ٺ��� �Ǻ���ġ ������ �������� �� �� ������
//����� �� �� ��ⷯ����� ���������� ������ ����Ƿ� �����ؾߵȴ�.