//boj1149��_RGB�Ÿ�_dp

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
	int N;
	cin >> N;

	int R, G, B;
	int price[1001][4];

	for (int i = 1; i <= N; i++) {
		cin >> R >> G >> B;
		price[i][1] = R;
		price[i][2] = G;
		price[i][3] = B;
	}

	int dp[1001][4];

	dp[1][1] = price[1][1];
	dp[1][2] = price[1][2];
	dp[1][3] = price[1][3];

	for (int i = 2; i <= N; i++) {
		dp[i][1] = min(dp[i - 1][2], dp[i - 1][3]) + price[i][1];
		dp[i][2] = min(dp[i - 1][1], dp[i - 1][3]) + price[i][2];
		dp[i][3] = min(dp[i - 1][1], dp[i - 1][2]) + price[i][3];
	}
	cout << min(min(dp[N][1], dp[N][2]), dp[N][3]) << endl;

	return 0;
}
//i��°���� ���������� ĥ�Ҷ�, �ʷϻ����� ĥ�Ҷ�, �Ķ������� ĥ�Ҷ��� �ּҺ���� ���Ͽ�
//������ �ּҰ��� ���ϴ� ����. i��°���� �������̸�,i-1��° ���� �ʷϻ��̳� �Ķ����̿����Ѵ�.