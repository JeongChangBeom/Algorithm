//boj2504��_��ȣ�� ��_�ڷᱸ��(����)

#include<iostream>
#include<stack>

using namespace std;

int main() {
	string str;
	cin >> str;

	stack<char> s;
	int result = 0;
	int num = 1;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			s.push(str[i]);
			num *= 2;
		}
		if (str[i] == ')') {
			if (s.empty() || s.top() != '(') { // <-
				cout << "0";
				return 0;
			}
			else {
				if (str[i - 1] == '(') {
					result += num;
				}
				s.pop();
				num /= 2;
			}
		}
		if (str[i] == '[') {
			s.push(str[i]);
			num *= 3;
		}
		if (str[i] == ']') {
			if (s.empty() || s.top() != '[') { // <-
				cout << "0";
				return 0;
			}
			else {
				if (str[i - 1] == '[') {
					result += num;
				}
				s.pop();
				num /= 3;
			}
		}
	}
	if (s.empty()) {
		cout << result;
	}
	else {
		cout << "0";
	}
}
//������ �̿��ؼ� Ǯ �� �ִ� ����. ó���� ��Ÿ�� ����(Segfault)�� ���µ� ������ top()�Լ��� ����ϱ� ����
//s.top() != '(' || s.empty() �̷������� �ۼ��Ͽ� ������ ����ִ��� Ȯ���� ���߱� ������ ������ ����.
//�� �ķ� �ѹ��� Ʋ�Ⱦ��µ� ������ �������� result�� ����Ҷ� ������ ��� ���� �ʾƵ� ����߱� �����̴�.
//(((((([] ���� ������ ���ڿ��� �޾Ƶ� �����̶�� Ȯ�εƾ��µ� ������ ����ִ��� Ȯ���� �����ν� �ذ��ߴ�.