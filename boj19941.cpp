//boj19941��_�ܹ��� �й�_�׸��� �˰���

#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	vector<char> v;
	int result = 0;

	for (int i = 0; i < N; i++) {
		char c;
		cin >> c;
		v.push_back(c);
	}

	for (int i = 0; i < N; i++) {
		if (v[i] == 'P') {
			for (int j = i - K; j <= i + K; j++) {
				if (j<0 || j>N - 1) {
					continue;
				}
				else if (v[j] == 'H') {
					v[j] = 'X';
					result++;
					break;
				}
			}
		 }
	}
	cout << result;
}
//�׸��� �˰��� ����.
//�Է¹��� ���� vector�� �־� vector�� ó������ ���� ���(P)�� �������� vector�� ������ ����� �ʴ� ������
//���� K���� ��ŭ�� Ž���ϸ� ���� ���ʿ� �ִ� H�� ã���� �ȴ�. �̹� ���� �ܹ��Ÿ� �� Ž���� �� �����Ƿ�
//�̹� ���� �ܹ��Ŵ� X�� �ٲ��ذ��ߴ�.