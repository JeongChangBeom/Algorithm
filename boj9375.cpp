//boj9375��_�мǿ� ���غ�_�ڷᱸ��, ���շ�

#include<iostream>
#include<map>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		int N;
		cin >> N;

		map<string, int> m;

		for (int i = 0; i < N; i++) {
			string s1, s2;
			cin >> s1 >> s2;
			
			if (m.find(s2) == m.end()) {
				m.insert(make_pair(s2, 1));
			}
			else {
				m[s2]++;
			}

		}

		int result = 1;
		
		for (auto it = m.begin(); it != m.end(); it++) {
			result *= it->second + 1;
		}

		cout << result - 1 << "\n";
	}
}
//map�� �̿��ؼ� Ǯ �� �ִ� ����.
//������ �ڼ��� ���� ��ǻ� ���� ������ ���� ������ �̿��� Ǫ�� �����̹Ƿ� ���� �̸��� �ʿ����.