//boj5430��_AC_����,�ڷᱸ��

#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int k = 0; k < T; k++) {
		string p;
		int n;
		string s;
		deque<int> d;
		bool reverse = false;
		bool error = false;
		
		cin >> p;
		cin >> n;
		cin >> s;

		string num = "";

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '[') {
				continue;
			}
			else if (s[i] >= '0' && s[i] <= '9') {
				num += s[i];
			}
			else if (s[i] == ',' || s[i] == ']') {
				if (!num.empty()) {
					d.push_back(stoi(num));
					num = "";
				}
			}
		}

		for (int i = 0; i < p.size(); i++) {
			switch (p[i])
			{
			case 'R':
				if (reverse) {
					reverse = false;
				}
				else {
					reverse = true;
				}
				break;
			case 'D':
				if (d.empty()) {
					error = true;
					break;
				}
				else if(reverse){
					d.pop_back();
				}
				else if (!reverse) {
					d.pop_front();
				}
				break;
			default:
				break;
			}
		}

		if (d.empty() && error) {
			cout << "error" << '\n';
		}
		else if(reverse) {
			cout << '[';
			for (int i = d.size()-1; i >= 0; i--) {
				cout << d[i];
				if (!(i == 0)) {
					cout << ',';
				}
			}
			cout << ']' << '\n';
		}
		else if (!reverse) {
			cout << '[';
			for (int i = 0; i < d.size(); i++) {
				cout << d[i];
				if (!(i == d.size() - 1)) {
					cout << ',';
				}
			}
			cout << ']' << '\n';
		}
	}
}

//�ڷᱸ�� deque�� ����ؼ� Ǯ �� �ִ� ����. 'R'�� algorithm��� ���Ͽ� reverse�Լ��� ���� �ߴ��� �ð��ʰ��� ������
//�迭�� �Է¹����� [ , ]�� ó���ϴ� �κп� �־ ���� �Ű��� ������ߴ�. 