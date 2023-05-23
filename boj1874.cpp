//boj1874��_���� ����_�ڷᱸ��(����)

#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	stack<int> s;
	vector<char> v;

	int num = 1;

	for (int i = 1; i <= N; i++) {
		int x;
		cin >> x;

		while (num <= x) {
			v.push_back('+');
			s.push(num);
			num++;
		}
		if (x == s.top()) {
			s.pop();
			v.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}
//������ ����ؼ� Ǯ �� �ִ� ����. num���� �Է¹��� ������ push�� �� �Է¹��� ���� ������ top��
//���� �� pop���ָ�ȴ�. �׸��� �Է¹��� ���� ������ top���� Ŭ��� ������ ���� �� ����.