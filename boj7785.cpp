//boj7785��_ȸ�翡 �ִ� ���_�ڷᱸ��(��)

/* �ð��ʰ�
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(string s1, string s2) {
	return s2 < s1;
}

int main() {
	int N;
	cin >> N;

	vector<string> v;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;

		string cmd;
		cin >> cmd;

		if (cmd == "enter") {
			v.push_back(s);
		}
		else if (cmd == "leave") {
			sort(v.begin(), v.end());
			v.erase(v.begin() + (lower_bound(v.begin(), v.end(), s) - v.begin()));
		}
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}
*/

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

bool compare(string s1, string s2) {
	return s2 < s1;
}

int main() {
	int N;
	cin >> N;

	map<string, string> m;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;

		string cmd;
		cin >> cmd;

		if (cmd == "enter") {
			m.insert({ s,cmd });
		}
		else if (cmd == "leave") {
			m.erase(s);
		}
	}

	vector<string> v;

	for (auto it = m.begin(); it != m.end(); it++)
	{
		v.push_back(it->first);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}
//ó���� vector�� �̿��ؼ� �ִ� �״�� �����غôµ� �ð��ʰ��� ���� ���� �̿��ؼ� �ٽ� �����ؼ� �ذ��ߴ�.