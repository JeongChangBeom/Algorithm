//boj2775��_�γ�ȸ���� ���׾�_dp

#include<iostream>

using namespace std;

int dp[15][15];

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int k, n;
		cin >> k;
		cin >> n;

		for (int j = 1; j <= 14; j++) {
			dp[0][j] = j;
		}

		for (int j = 1; j <= k; j++) {
			for (int x = 1; x <= n; x++) {
				dp[j][x] = dp[j - 1][x] + dp[j][x - 1];
			}
		}

		cout << dp[k][n] << "\n";
	}
}
//������ dp���� �ʱ⸦ ���� ���� �˾Ƴ��� ���� Ǯ �� �־���.