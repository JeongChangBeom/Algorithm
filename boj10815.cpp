//boj10815_����ī��_�̺�Ž��

#include <iostream>
#include <algorithm>

using namespace std;

int sang[500001];
int card[500001];
int result[500001];

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> sang[i];
	}

	sort(begin(sang), end(sang));

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> card[i];
	}

	for (int i = 0; i < M; i++) {
		if (binary_search(begin(sang), end(sang), card[i])) {
			result[i] = 1;
		}
		else {
			result[i] = 0;
		}
	}

	for (int i = 0; i < M; i++) {
		cout << result[i] << " ";
	}

	return 0;
}
//�̺�Ž���� ����ؼ� Ǯ �� �ִ� ����. STL�� ����ؼ� �ذ��ߴ�.