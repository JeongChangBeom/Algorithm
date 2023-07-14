//boj2225��_�� ����_dp

#include <iostream>

using namespace std;

int dp[201][201];

int main() {
	int N, K;
	cin >> N >> K;

	for (int i = 0; i <= K; i++) {
		dp[1][i] = i;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000000;
		}
	}
	cout << dp[N][K] % 1000000000;

	return 0;
}
//dp����. DP[N][K] = DP[N-1][K] + DP[N][K-1]�̶�� ��ȭ���� ã�Ƽ� Ǯ �� �־���.