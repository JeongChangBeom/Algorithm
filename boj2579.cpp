//boj2579��_��� ������_dp

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	vector <int> stairs(301);
	int x;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		cin >> stairs[i];
	}

	vector <int> dp(301);

	dp[1] = stairs[1];
	dp[2] = stairs[1] + stairs[2];
	dp[3] = max(stairs[1] + stairs[3], stairs[2] + stairs[3]);

	for (int i = 4; i <= x; i++) {
		dp[i] = max(stairs[i] + dp[i - 2], stairs[i] + stairs[i - 1] + dp[i - 3]);
	}

	cout << dp[x] << endl;

	return 0;
}
//dp����. ����� 2�� ������ ���� ����� 3�� �̻��� ���� ������ �����ϸ� �ذ��ϱ� �����.
//����� 2�� ������ ��� �׳� ���ϸ� �ǰ�, 3�� �̻��� ���� �������� 2���� ����� ����� ����
//1���� �ǳ� �� ����� �ִ밪�� ���ϸ� �ȴ�.