//boj11659��_���� �� ���ϱ� 4_���� ��

#include<iostream>

using namespace std;

int sum[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int num;
	cin >> num;

	sum[0] = 0;
	sum[1] = num;

	for (int i = 2; i <= N; i++) {
		cin >> num;
		sum[i] = sum[i - 1] + num;
	}

	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		cout << sum[y] - sum[x-1] << "\n";
	}
}
//�Է¹��� ��� ���� for������ ���ϰ� �Ǹ� �ð��ʰ��� ���� ����.
//���� ���� Ǯ���� ���� ó���� �ð��ʰ��� ���µ� ����°����� ���ִ� ����Ǿ���.