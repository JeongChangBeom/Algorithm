//boj10610��_30_����,���ڿ�

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(char x, char y) {
	return x > y;
}

int main() {
	string N;
	string result;
	int sum = 0;

	cin >> N;

	vector<int> v;

	for (int i = 0; i < N.size(); i++) {
		v.push_back(N[i]);
		sum += N[i] - '0';
	}

	sort(v.begin(), v.end(), compare);

	if (sum % 3 == 0 && (v[v.size() - 1] - '0') == 0) {
		for (int i = 0; i < v.size(); i++) {
			result += v[i];
		}
		cout << result;
	}
	else {
		cout << -1;
	}
}
//������������ ������ ���� 3���� �������鼭 ���ڸ����� 0�̸�, ����� �ִ� 30�� ����� ���� ū�� ���� �̿��� �ذ��ߴ�.