//boj11931��_�� �����ϱ� 4_����

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(int x, int y) {
	if (x > y) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int N;
	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}
//algorithm��� ���Ͽ� �ִ� sort�Լ��� compare�Լ��� ��������ָ� ���� Ǯ �� �ִ� ����.