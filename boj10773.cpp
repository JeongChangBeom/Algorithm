//boj10773_����_�ڷᱸ��(����)

#include<iostream>
#include<stack>

using namespace std;

int main() {
	int K;
	cin >> K;

	stack<int> s;

	for (int i = 0; i < K; i++) {
		int x;
		cin >> x;

		if (x == 0) {
			s.pop();
		}
		else {
			s.push(x);
		}
	}

	int result = 0;
	while (s.empty() == false) {
		result += s.top();
		s.pop();
	}

	cout << result;
}
//������ �̿��ؼ� Ǯ �� �ִ� ���� ����.