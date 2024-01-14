//boj17266��_��ο� ���ٸ�_�̺� Ž��

#include<iostream>

using namespace std;

int arr[100001];

int main() {
	int N, M;
	cin >> N;
	cin >> M;

	for (int i = 1; i <= M; i++) {
		cin >> arr[i];
	}

	int start = 0;
	int end = 100000;

	int result = 999999;

	while (start <= end) {
		bool check = true;
		int mid = (start + end) / 2;

		if (arr[1] > mid) {
			check = false;
		}

		for (int i = 1; i <= M - 1; i++) {
			if (arr[i + 1] - arr[i] > mid * 2) {
				check = false;
				break;
			}
		}

		if (N - arr[M] > mid) {
			check = false;
		}

		if (check) {
			result = min(result, mid);
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}

	cout << result;
}
//�̺�Ž���� �̿��ؼ� Ǯ �� �ִ¹���.
//ó������ ù��° ���ε����, ���ε�� ���ε� ����, ������ ���ε�� ������ ������ �����ϸ� �ذ��� �� �ִ�.