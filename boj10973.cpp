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

	if (prev_permutation(v.begin(), v.end())) {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
		}
	}
	else {
		cout << "-1";
	}
}
//�־��� �������� ���������� ������ ������ ���ϴ� ����.
//���̺귯���� prev_permutation�̶�� ���� ������ �����ϸ� true�� ��ȯ�ϸ� �迭�� ���� ���� ������ �ٲ�� �Լ��� �ִ�.
//�� �Լ��� ����ϸ� ���� �ذ��� �� �ִ�.