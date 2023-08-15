//boj2485��_���μ�_����, ��Ŭ���� ȣ����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int GCD(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return GCD(y, x % y);
	}
}

int main() {
	int N;
	cin >> N;

	vector<int> v;
	vector<int> dis;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 1; i < N; i++) {
		int distance = v[i] - v[i - 1];
		dis.push_back(distance);
	}

	int gcd = dis[0];

	for (int i = 1; i < N - 1; i++) {
		gcd = GCD(gcd, dis[i]);
	}

	int result = 0;

	for (int i = 0; i < N - 1; i++) {
		result += dis[i] / gcd - 1;
	}

	cout << result;
}
//��Ŭ���� ȣ������ �̿��� ���й���. ������ ������ ������ �ִ������� ���ؼ� dis[i] / gcd - 1�� ���� ���� ���� �� �ִ�.
//������ ���� �ǳ��� �̹� ������ �ɾ��� �����Ƿ� ���� �ϳ��� ���� �ǹǷ� -1�� �� ����ߵȴ�.