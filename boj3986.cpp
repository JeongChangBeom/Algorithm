//boj3986��_���� �ܾ�_�ڷᱸ��(����)

#include<iostream>
#include<stack>

using namespace std;

int main() {
	int N;
	cin >> N;

	int result = 0;

	for(int t = 0; t < N; t++) {
		string str;
		cin >> str;

		stack<char> s;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'A') {
				if (s.empty()) {
					s.push(str[i]);
				}
				else {
					if (s.top() == 'A') {
						s.pop();
					}
					else {
						s.push(str[i]);
					}
				}
			}
			if (str[i] == 'B') {
				if (s.empty()) {
					s.push(str[i]);
				}
				else {
					if (s.top() == 'B') {
						s.pop();
					}
					else {
						s.push(str[i]);
					}
				}
			}
		}

		if (s.empty()) {
			result++;
		}

	}

	cout << result;
}
//������ �̿��ؼ� �ذ��� �� �ִ¹���.