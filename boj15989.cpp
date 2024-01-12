//boj15989��_1,2,3 ���ϱ� 4_dp

#include<iostream>

using namespace std;

int dp[10001];

int main() {
	int T;
	cin >> T;
	
	for (int t = 0; t < T; t++) {
		for (int i = 0; i < 10001; i++) {
			dp[i] = 0;
		}

		int N;
		cin >> N;

		dp[0] = 1;

		for (int i = 1; i <= 3; i++) {
			for (int j = 1; j <= N; j++) {
				dp[j] += dp[j - i];
			}
		}

		cout << dp[N] << '\n';
	}
}

//dp ����. 1����, 2����, 3������ ���ڵ�� N�� ���� �� �ִ� ����� ���� ���ϴ� �����̴�.
//���Ҿ� ������� dp�� ���� �����ذ��鼭 Ǯ�� ���� �ذ��� �� �ִ�.
//dp�迭�� �����ذ��� �ذ��ߴ�.