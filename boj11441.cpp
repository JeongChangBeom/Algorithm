//boj11441��_�� ���ϱ�_���� ��

#include<iostream>

using namespace std;

int arr[100001];

int main() {
	ios_base::sync_with_stdio(0); //����°���
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	int sum = 0;

	for (int i = 1; i <= N; i++) {
		int num;
		cin >> num;

		sum += num;

		arr[i] = sum;
	}

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;

		cout << arr[y] - arr[x - 1] << '\n';
	}
}
//���� ������ Ǯ �� �ִ� ����. ���� ������ Ǯ�� ������ �ð� �ʰ��� ����, ���� ������ Ǯ� ����°����� �����ָ� �ð��ʰ��� ���� ����.