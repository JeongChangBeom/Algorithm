//boj1448��_�ﰢ�� �����_����, �׸��� �˰���

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int x, int y) {
	return x > y;
}

int main() {
	int N;
	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end(), compare);

	int result = -99;

	for (int i = 0; i <= N - 3; i++) {
		if (v[i] < v[i + 1] + v[i + 2]) {
			result = v[i] + v[i + 1] + v[i + 2];
			break;
		}
	}

	if (result == -99) {
		cout << "-1";
	}
	else {
		cout << result;
	}
}
//������ �̿��� ����. �ﰢ���� �Ǳ� ���� ������ ���� �� ���� ���̰� ������ �κ��� ������ �պ��� �۾ƾߵȴ�.