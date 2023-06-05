//boj17413��_�ܾ� ������ 2_�ڷᱸ��(����)

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	string str;
	getline(cin, str);

	stack<char> s;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '<') {
			if (!s.empty()) {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << '<';
				i++;
			}
			while (str[i] != '>') {
				cout << str[i++];
			}
			cout << '>';
		}
		else {
			s.push(str[i]);
			if (str[i] == ' ') {
				s.pop();
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << ' ';
			}
		}
	}

	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}
//������ ����ؼ� Ǯ �� �ִ� ����.