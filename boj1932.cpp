//boj1932��_���� �ﰢ��_dp

#include <iostream>
#include <algorithm>

using namespace std;

int dp[501][501];
int tri[501][501];

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> tri[i][j];
		}
	}

	dp[1][1] = tri[1][1];

	for (int i = 2; i <= N; i++) { // �������� ���� �밢���� ������ �밢������ ���� ū ���� ã�� ���� Ʈ�� ���� ���ϴ� ������ ���
		for (int j = 1; j <= i; j++) {
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + tri[i][j]; 
		}
	}

	int result = -1;
	for (int i = 1; i <= N; i++) {
		result = max(result, dp[N][i]);
	}

	cout << result << endl;

	return 0;
}
//���Ҿ� ����� �̿��Ͽ� Ǯ �� �ִ� ����