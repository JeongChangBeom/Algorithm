//boj2548��_��ǥ �ڿ���_����

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

	if (N % 2 == 0) {
		cout << v[N / 2 - 1];
	}
	else {
		cout << v[N / 2];
	}
}
//������ �̿��� ����.
//������������ �����ؼ� ��� ���� ���ϸ� �Ǵ� ���� �����̴�.
//�Է¹��� ���� ������ Ȧ������ ¦�������� ���� ������� �ٸ��Ƿ� ��������.