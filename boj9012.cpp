//boj9012��_��ȣ_�ڷᱸ��(����)

#include<iostream>
#include<stack>

using namespace std;

int main() {
	int N;
	cin >> N;

	int j;

	for (int i = 0; i < N; i++) {
		stack<char> s;

		string x;
		cin >> x;

		for (j = 0; j < x.length(); j++) {
			if (x[j] == '(') {
				s.push(x[j]);
			}
			if (x[j] == ')') {
				if (s.empty() == false) {
					s.pop();
				}
				else {
					cout << "NO" << "\n";
					break;
				}
			}
		}

		if (s.empty() && j == x.length()) {
			cout << "YES" << "\n";
		}
		else if(s.empty() == false && j == x.length()) {
			cout << "NO" << "\n";
		}
	}
}
//�ڷᱸ�� ������ �̿��ؼ� Ǯ �� �ִ� ����. Ǯ�ٺ��� �ڵ尡 ���� ����������.
//�������� ����� �ڵ带 © �� �ֵ��� �� �� ��� �����غ��� �� �� ����.