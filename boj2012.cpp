//boj2012��_��� �ű��_�׸��� �˰���, ����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	long long result = 0;

	for (int i = 0; i < N; i++) {
		result += abs((i + 1) - v[i]);
	}

	cout << result;
}
//���� ����
//sort�� �̿��ؼ� ������ 1~N���� �ο��ؼ� ���� �����ִ� ������ Ǯ����.