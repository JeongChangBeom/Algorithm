//boj17626��_Four Squares_dp

#include<iostream>

using namespace std;

int dp[50001];

int main() {
	int n;
	cin >> n;

	dp[1] = 1;


	for (int i = 1; i <= n; i++) {
		dp[i] = dp[1] + dp[i - 1];

		for (int j = 2; j * j <= i; j++)
		{
			dp[i] = min(dp[i], 1 + dp[i - j * j]);
		}
	}

	cout << dp[n];
}
//dp����. dp�� ���̵��� ������� �׻� ������ ����.
//1,4,9,16���� �������� �׻� 1�̹Ƿ� ���� dp[30]�� ���Ѵٸ�
//dp[1] + dp[29], dp[4] + dp[26], dp[9] + dp[21], dp[16] + dp[14], dp[25] + dp[5] �� ���� ���� ���� ���̵ȴ�.
//����� ��ȭ���� dp[i] = 1 + dp[i-j*j]�� �ȴ�.