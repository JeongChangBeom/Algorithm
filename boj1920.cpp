//boj1920��_�� ã��_����, �̺�Ž��

#include <iostream>
#include <algorithm>

using namespace std;

int arr1[100001];
int arr2[100001];
int result[100001];

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr1[i];
	}

	sort(arr1, arr1 + N);

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> arr2[i];
	}

	for (int i = 0; i < M; i++) {
		if (binary_search(arr1, arr1 + N, arr2[i])) {
			cout << "1" << "\n";
		}
		else {
			cout << "0" << "\n";
		}
	}

	return 0;
}
//���İ� �̺�Ž���� �̿��ؼ� Ǯ �� �ִ� ����.