//boj2003��_������ �� 2_�� ������

#include <iostream>

using namespace std;

int arr[10001];
int result;
int sum;

int main() {
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			sum += arr[j];

			if (sum == M) {
				result++;
				sum = 0;
				break;
			}
		}
		sum = 0;
	}

	cout << result;

	return 0;
}
//�� �������� ���� ���ʹ���. �ϳ��� �迭�� ���������� ���� 2���� �������� ��ġ�� ����ϸ鼭 �����ϴ� ���� �ٽ��̴�.