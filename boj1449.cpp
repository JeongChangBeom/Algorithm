//boj1449��_������ �׽�_����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N, L;
	cin >> N >> L;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	int result = 1;

	int index = v[0];

	for (int i = 1; i < v.size(); i++) {
		if((v[i] - index) >= L) {
			result++;
			index = v[i];
		}
	}
	cout << result;
}
//������ ����ؼ� Ǯ �� �ִ� ����.
//���� for������ ������ �������� ���ܵǾ� �����Ƿ� result�� 1�� �����Ͽ� �ذ��ߴ�.