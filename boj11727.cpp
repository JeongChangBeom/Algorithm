//boj11727��_2xN Ÿ�ϸ� 2_dp

#include <iostream>
#include <vector>

using namespace std;


int main() {
	int x;
	cin >> x;

	vector <int> dp(1001);

	dp[1] = 1;
	dp[2] = 3;
	dp[3] = 5;
	dp[4] = 11;

	for (int i = 5; i <= x; i++) {
		dp[i] = ((dp[i - 2] * 2) + dp[i - 1]) % 10007;
	}

	cout << dp[x] % 10007 << "\n";

	return 0;
}
//���� Ǯ���� 2xN Ÿ�ϸ� ������ Ȯ������� ����. 2xN Ÿ�ϸ� ������ �ٸ��� 2x2 Ÿ���� ����
//��ȭ���� dp[i-2]�κп� 2�� �����ִ� ���� �ٽ�. 2x2 = 1x2(or 2x1) * 2