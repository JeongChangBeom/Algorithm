//boj2631��_�ټ����_dp, LIS

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> v(N + 1);
	vector<int> dp(N + 1, 1);

	for (int i = 1; i <= N; i++) {
		int num;
		cin >> num;
		v[i] = num;
	}

	int result = 0;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (v[i] > v[j] && dp[i] < dp[j] + 1) {
				dp[i]++;
			}
		}
		result = max(result, dp[i]);
	}

	cout << N - result;
}
//��� �ذ��ؾߵ��� ����� ���� �ߴ� �����̴�.
//���θ� ���� LIS(���� �κ� ���� ����)�� �̿��ؼ� Ǯ��ȴٴ� ���� �˰ԵǾ���.
//�������� ���ִ� ��̵��� ���� �κ� ���� ������ ã�� �� �κм����� ���ΰ� ������ ��̵��� ������������ �����ϴ� ������ �ذ��ϸ�ȴ�.
//�׷��� ������ dp�� �̿��ؼ� LIS�� ���ϰ� ��ü ����� ������ LIS�� ���̸� ���ָ� �ذ��� �� �ִ�.