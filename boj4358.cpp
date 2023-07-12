//boj4358��_������_�ڷᱸ��(map)

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main() {
	map<string, float>m;
	string s;
	float cnt = 0;

	while (getline(cin, s)) {
		cnt++;

		if (m.find(s) != m.end()) {
			m[s] += 1;
		}
		else {
			m[s] = 1;
		}
	}

	cout << fixed;
	cout.precision(4);

	for (auto it = m.begin(); it != m.end(); it++) {
		float rate = (it->second / cnt) * 100;
		cout << it->first << " ";
		cout << rate << '\n';
	}
	return 0;
}
//map�� �̿��ؼ� Ǯ �� �ִ� ���� while���� ���Ḧ eof�� �޾Ƽ� ó���ϴ� ���� �ٽ��̴�.