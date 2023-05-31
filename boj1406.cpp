//boj1406��_������_�ڷᱸ��(����)

#include<iostream>
#include<stack>

using namespace std;

int main() {
	string str;
	cin >> str;

	stack<char> s1;
	stack<char> s2;

	for (int i = 0; i < str.size(); i++) {
		s1.push(str[i]);
	}

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		char cmd;
		cin >> cmd;

		switch (cmd) {
		case 'L':
			if (s1.empty()) {
				break;
			}
			else {
				s2.push(s1.top());
				s1.pop();
				break;
			}
		case 'D':
			if (s2.empty()) {
				break;
			}
			else {
				s1.push(s2.top());
				s2.pop();
				break;
			}
		case 'B':
			if (s1.empty()) {
				break;
			}
			else {
				s1.pop();
				break;
			}
		case 'P':
			char x;
			cin >> x;
			s1.push(x);
		}
	}
	while (!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}
	while (!s2.empty()) {
		cout << s2.top();
		s2.pop();
	}
}
//������ �̿��ؼ� ������ �־��� ������ �����ߴ�.
//������ 2�� ����ؼ� ù��° ������ top�� �������� 'Ŀ��'���ҷ� ��� �ϴ� ���� �ٽ��̴�.