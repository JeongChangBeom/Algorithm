//boj9095��_1, 2, 3 ���ϱ�_dp

#include <iostream>
#include <vector>

using namespace std;


int main() {
	int x;
	cin >> x;

	for (int T = 0; T < x; T++) {
		int n;
		cin >> n;
		vector<int> dp(12);

		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;

		for (int i = 4; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}

		cout << dp[n] << endl;
	}
	return 0;
}
//dp����. 1, 2, 3�� ������ ������ ǥ���ϴ� ����� ������ ���ϴ� ����.
//1�� 1����, 2�� 2����, 3�� 4����, 4�� �������� �˷��� ��� 7�����̸�
//�� ������ ���� ���� ������ �� �־���.