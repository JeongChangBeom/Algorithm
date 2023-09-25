//boj1946��_���� ���_�׸��� �˰���, ����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		int N;
		cin >> N;

		vector<pair<int, int>> v;

		for (int i = 0; i < N; i++) {
			int test1, test2;
			cin >> test1 >> test2;

			v.push_back({ test1, test2 });
		}

		sort(v.begin(), v.end());

		int result = 0;
		int i = 0;

		for (int j = 1; j < N; j++) {
			if (v[i].second > v[j].second) {
				result++;
				i = j;
			}
		}
		cout << result + 1 << '\n';
	}
}
//������ ����� �׸��� �˰��� ����.
//���� ���� ����(test1)�� ������ �� ��, ���� ���� 1����� ���� ����� ���������� ���ϴ� ������ �ذ��ߴ�.