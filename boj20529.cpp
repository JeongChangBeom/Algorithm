//boj20529��_���� ����� �� ����� �ɸ��� �Ÿ�_��ѱ��� ����

#include<iostream>
#include<vector>

using namespace std;

int distance(string x, string y, string z) {
	int dis = 0;
	for (int i = 0; i < 4; i++) {
		if (x[i] != y[i]) {
			dis++;
		}
		if (y[i] != z[i]) {
			dis++;
		}
		if (z[i] != x[i]) {
			dis++;
		}
	}
	return dis;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		int N;
		cin >> N;

		vector<string> v;

		for (int i = 0; i < N; i++) {
			string mbti;
			cin >> mbti;
			v.push_back(mbti);
		}

		if (N > 32) {
			cout << '0' << '\n';
		}
		else {
			int result = 999999;

			for (int i = 0; i < N - 2; i++) {
				for (int j = i + 1; j < N - 1; j++) {
					for (int k = j + 1; k < N; k++) {
						result = min(result, distance(v[i], v[j], v[k]));
					}
				}
			}
			cout << result << '\n';
		}
	}
}
//��ѱ��� ������ ����Ͽ� �ð��ʰ��� ���ϴ� ���� �ٽ��� ����. mbti�� �� 16���� �̹Ƿ� �Է��� 32�� �Ѱ� ������ ������
//���� ����� ������� �Ÿ��� 0�� �ȴٴ� ���� �̿��ߴ�.