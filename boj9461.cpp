//boj9461��_�ĵ��� ����_dp

#include <iostream>

using namespace std;

long long dp[101];

int main() {
	int T;
	cin >> T;

	for (int x = 0; x < T; x++) {
		int N;
		cin >> N;
		dp[1] = 1;
		dp[2] = 1;
		dp[3] = 1;
		for (int i = 4; i <= N; i++) {
			dp[i] = dp[i - 2] + dp[i - 3];
		}
		cout << dp[N] << "\n";
	}
	return 0;
}
//dp[1]���� dp[10]�������� ����� ��å�� ����� ���� ������ �� �� �ִ� ����