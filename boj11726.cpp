//boj11726��_2xn Ÿ�ϸ�_dp

#include <iostream>
#include <vector>

using namespace std;


int main() {
	int x;
	cin >> x;

	vector <int> dp(1001);

	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= x; i++) {
		dp[i] = (dp[i - 2] + dp[i - 1]) % 10007; //���⼭ ��ⷯ ������ ���ϰ� ����� �� �ϸ� Ʋ��
	}

	cout << dp[x] << endl;

	return 0;
}
//��ȭ�ĸ� �˾Ƴ��� ���� Ǯ �� �ִ� ����