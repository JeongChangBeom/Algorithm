//boj1918번_후위 표기식_스택

#include<iostream>
#include<stack>

using namespace std;

int main() {
	string str;
	cin >> str;

	string result = "";

	stack<char> s;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			result += str[i];
		}
		else {
			if (s.empty()) {
				s.push(str[i]);
			}
			else {
				if (str[i] == '(') {
					s.push(str[i]);
				}
				else if (str[i] == '+' || str[i] == '-') {
					while (!s.empty() && s.top() != '(') {
						result += s.top();
						s.pop();
					}
					s.push(str[i]);
				}
				else if (str[i] == '*' || str[i] == '/') {
					while (!s.empty() && s.top() != '(' && s.top() != '+' && s.top() != '-') {
						result += s.top();
						s.pop();
					}
					s.push(str[i]);
				}
				else if (str[i] == ')') {
					while (!s.empty() && s.top() != '(') {
						result += s.top();
						s.pop();
					}
					s.pop();
				}
			}
		}
	}

	while (!s.empty()) {
		result += s.top();
		s.pop();
	}

	cout << result;

	return 0;
}