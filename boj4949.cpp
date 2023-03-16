//boj4949��_�������� ����_�ڷᱸ��(����)

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	while (true) {
		stack<char> s;

		string str;
		getline(cin, str);

		if (str[0] == '.' && str.length() == 1) {
			return 0;
		}

		int i;

		for (i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			if (str[i] == ')') {
				if (s.empty() == false && s.top() == '(') {
					s.pop();
				}
				else {
					cout << "no" << "\n";
					break;
				}
			}
			if (str[i] == ']') {
				if (s.empty() == false && s.top() == '[') {
					s.pop();
				}
				else {
					cout << "no" << "\n";
					break;
				}
			}
		}

		if (s.empty() && i == str.length()) {
			cout << "yes" << "\n";
		}
		else if(s.empty() == false && i== str.length()){
			cout << "no" << "\n";
		}
	}
}
//�ڷᱸ�� ������ ����ؼ� Ǯ �� �ִ� ����.
//getline()�� ���� ������� �Է¹޴� ���� ��ġ�� Ʋ�� ���� �ִ� ��������.