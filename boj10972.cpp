//boj10972��_���� ����_����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int  N;
	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	if (next_permutation(v.begin(), v.end())) {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
		}
	}
	else {
		cout << "-1";
	}
}
//���;��� ��ҵ��� ���� ������ ���ؼ� boolŸ������ ��ȯ���ִ� next_permutation�� ����ؼ� Ǯ����.