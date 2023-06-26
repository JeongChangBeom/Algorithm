//boj5397��_Ű�ΰ�_�ڷᱸ��(����)

#include<iostream>
#include<stack>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		string L;
		cin >> L;

		stack<char> s1;
		stack<char> s2;

		for (int i = 0; i < L.size(); i++) {
			if (L[i] == '<') {
				if (s1.empty()) {
					continue;
				}
				else {
					s2.push(s1.top());
					s1.pop();
				}
			}
			else if(L[i] == '>') {
				if (s2.empty()) {
					continue;
				}
				else {
					s1.push(s2.top());
					s2.pop();
				}
			}
			else if (L[i] == '-') {
				if (s1.empty()) {
					continue;
				}
				else {
					s1.pop();
				}
			}
			else {
				s1.push(L[i]);
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

		cout << '\n';
	}
}
//������ �̿��ؼ� �ذ��� �� �ִ� ����.
//���� 2���� ����ؼ� s1�� top�� Ŀ���� �����ϸ� ���� �ذ� �� �� �ִ�. 