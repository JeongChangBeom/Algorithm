//boj1037��_���_����, ������

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

	int result = 0;

	result = *min_element(v.begin(), v.end()) * *max_element(v.begin(), v.end());

	cout << result;
}
//������ ���й���.
//�־��� ���� ����� ���� ���� ã������ ����� ���� ���� ���� ���� ū���� �����ָ� �ȴ�.