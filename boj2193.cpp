//boj2193��_��ģ��_dp

#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	long long dp[91];

	dp[1] = 1;
	dp[2] = 1;
	
	for (int i = 3; i <= N; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
	}

	cout << dp[N];
}
//�̹����� dp[i] = dp[i - 2] + dp[i - 1]��� ��ȭ���� ��� �Ǻ���ġ ������ ���� dp������ Ǯ �� �ִµ�
//�Է����� �޴� ���� �ִ�ġ�� 90�̹Ƿ� intŸ���� ���� int�� ������ �Ѿ� Ʋ���� �ȴ�. (long longŸ���� �������)