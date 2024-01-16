//boj3758��_KCPC_����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct team {
	int id;
	int count;
	int score;
	int time;
};

team tm[101];
int arr[101][101];

bool compare(team x, team y) {
	if (x.score == y.score) {
		if (x.count == y.count) {
			return x.time < y.time;
		}
		else {
			return x.count < y.count;
		}
	}
	else {
		return x.score > y.score;
	}
}

int main() {
	int T;
	cin >> T;

	for (int test = 0; test < T; test++) {
		for (int i = 0; i < 101; i++) {
			tm[i].id = 0;
			tm[i].count = 0;
			tm[i].score = 0;
			tm[i].time = 0;
		}

		for (int i = 0; i < 101; i++) {
			for (int j = 0; j < 101; j++) {
				arr[i][j] = 0;
			}
		}

		int n, k, t, m;
		cin >> n >> k >> t >> m;

		for (int i = 0; i < n; i++) {
			tm[i].id = i + 1;
		}

		for (int i = 0; i < m; i++) {
			int d, num, s;
			cin >> d >> num >> s;

			arr[d][num] = max(arr[d][num], s);
			tm[d - 1].count++;
			tm[d - 1].time = i;
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= k; j++) {
				tm[i - 1].score += arr[i][j];
			}
		}

		sort(tm, tm + n, compare);

		int result = 0;

		for (int i = 0; i < n; i++) {
			if (tm[i].id == t) {
				result = i + 1;
			}
		}
		cout << result << '\n';
	}
}
//���Ĺ���. ����ü�� �̿��ؼ� �ذ��ߴ�.
//algorithm��� ���Ͽ� �ִ� sort�Լ��� �̿��ϱ� ���� ���ǿ� �´� compare�Լ��� �������.
//���� ������ �ٽ��� �������� �־��� ���� ������ �����ϴ� ���̴�.
//1.������ ������ ������ ����. 2.������ ������ Ǯ�̸� ���� ������ ���� ������ ����.
//3. ����,Ǯ�� ���� Ƚ���� ���� ��� ���������� ������ �ð��� ���� ���� ������ ����.
//�� ������ �������� ������ �� �ִ� compare�Լ��� ����� �ذ��� �� �ִ�.