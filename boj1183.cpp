//boj1183��_���_����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	vector<int> v;

	for (int i = 0; i < N; i++) {
		int A, B;
		cin >> A >> B;
		v.push_back(A - B);
	}

	sort(v.begin(), v.end());

	if (N % 2 == 0) {
		cout << v[N / 2] - v[N / 2 - 1] + 1;
	}
	else {
		cout << 1;
	}
}
//������ �̷��� �� ���Ĺ���.
//¦�� �϶� n/2���� n/2-1�̻��� ��� ������ T�� ���� �ǰ�, Ȧ�� �϶��� �߰����� 1���� �ȴ�.