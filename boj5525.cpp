//boj5525��_IOIOI_���ڿ�

#include<iostream>

using namespace std;

int main() {
	int N, M;
	string S;
	cin >> N >> M >> S;

	int result = 0;

	for (int i = 0; i < S.size(); i++) {
		int count = 0;

		if (S[i] == 'O') {
			continue;
		}
		if (S[i] == 'I') {
			while (S[i + 1] == 'O' && S[i + 2] == 'I') {
				count++;

				if (count == N) {
					result++;
					count--;
				}
				i += 2;
			}
		}
	}
	cout << result;
}

//string����� �ִ� find �Լ��� Ǯ�� �ð��ʰ��� ���� ����.
//'O'�� ���ö� �ѱ�� 'I'�� ���ö� ���� ���ڰ� 'O'�̰� �ٴ��� ���ڰ� 'I'�� ��츦 �˻��ؼ� �ذ��ߴ�.