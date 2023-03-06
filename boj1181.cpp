//boj1181_�ܾ� ����_����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> s;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string x;
		cin >> x;
		if (find(s.begin(), s.end(), x) == s.end()) {
			s.push_back(x);
		}
	}

	sort(s.begin(), s.end(),compare);

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << "\n";
	}
}
//algorithm�� sort�� �̿��ؼ� Ǯ �� �ִ� ����.
//sort�� ����° ���ڷ� ���� ���� �Լ��� ���� �� �ִ� ���� �˰� �ִٸ� ���� Ǯ �� �ִ� ����.