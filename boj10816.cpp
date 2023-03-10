//boj10816��_���� ī��2_����, �̺� Ž��

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> sang;
vector<int> card;
vector<int> result;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		sang.push_back(x);
	}

	sort(sang.begin(),sang.end());

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		int y;
		cin >> y;
		card.push_back(y);
	}

	for (int i = 0; i < M; i++) {
		if (binary_search(sang.begin(), sang.end(), card[i])) {
			result.push_back(upper_bound(sang.begin(), sang.end(), card[i]) - lower_bound(sang.begin(), sang.end(), card[i]));
		}
		else {
			result.push_back(0);
		}
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}

	return 0;
}
//�̺�Ž��(logN)���� ���� Ž���� �Ͽ� �ð��ʰ��� ���ϴ� ����.
//upper_bound�� �迭�̳� ���Ϳ��� ����° ���ڰ��� ���������� ������ �ε���+1
//lower_bound�� ����° ���ڰ��� ó�� ������ �ε������� ��ȯ���ֱ� ������
//���ĵǾ� �ִ� �迭�̳� ���Ϳ��� upper_bound - lower_bound�� �ϸ� �迭�� 
//����° ���ڰ��� � �ִ��� �� �� �ִ�.