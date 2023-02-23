//boj1003��_�Ǻ���ġ �Լ�_dp

#include<iostream>

using namespace std;

int dp[41];

int main() {
	int T; //�׽�Ʈ ���̽�
	cin >> T;
	for (int i = 0; i < T; i++) {
		dp[0] = 0;
		dp[1] = 1;
		dp[2] = 1;

		for (int j = 3; j <= 40; j++) { //�Ǻ���ġ���� dp�� �̿��� ���ϱ�(�ð� �ʰ� ����)
			dp[j] = dp[j - 1] + dp[j - 2];
		}

		int N;
		cin >> N;

		if (N == 0) {
			cout << "1 0" << "\n";
		}
		else if (N == 1) {
			cout << "0 1" << "\n";
		}
		else {
			cout << dp[N - 1] << " " << dp[N] << "\n";
		}
	}
}
//0�� ������ dp[N-1]��, 1�� ������ dp[N]���� ��Ģ�� ã���� ���� Ǯ �� �ִ� ����