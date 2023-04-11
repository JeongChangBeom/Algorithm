//boj10799��_�踷���_�ڷᱸ��(����)

#include<iostream>
#include<stack>

using namespace std;

int main() {
	string str;
	cin >> str;

	int result = 0;

	stack<char> s;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			s.push(str[i]);
		}
		else if (str[i] == ')') {
			if (str[i - 1] == '(') {
				s.pop();
				result += s.size();
			}
			else {
				s.pop();
				result++;
			}
		}
	}

	cout << result;
}
//�ڷᱸ�� ������ �̿��� ���� �ذ��� �� �ִ� ����.