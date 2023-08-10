//boj14501��_���_dp

#include<iostream>
#include<vector>

using namespace std;

int T[16];
int P[16];
int dp[16];

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> T[i] >> P[i];
	}

	for (int i = N; i >= 1; i--) {
		if (i + T[i] - 1 > N) {
			dp[i] = dp[i + 1];
			continue;
		}
		dp[i] = max(dp[i + T[i]] + P[i], dp[i + 1]);
	}
	cout << dp[1];
}
//dp�� �ذ��� ����. �޳����� �����ؼ� N+1�Ͽ��� ȸ�翡 ���� ����� �� �� ���ٴ� ������ if���� ���� �ذ��߰�
//�������� ���� ���� �ؼ� �� �� �ִ� �ݾװ� ���� �������� �ʰ� ������ ���ؼ� �� ���� �ִ밪�� ���ϸ� �ذ��ߴ�.