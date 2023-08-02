//boj10815_����ī��_�̺�Ž��

#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

vector<int> sang;
vector<int> card;
int result[500001];

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		sang.push_back(num);
	}

	sort(sang.begin(), sang.end());

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		card.push_back(num);
	}

	for (int i = 0; i < M; i++) {
		if (binary_search(sang.begin(), sang.end(), card[i])) {
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
//������ Ǯ���� ������ ��ä������ ����ó���� �Ǿ� ��������� �ߴ�.