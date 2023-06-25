//boj11652��_ī��_����, ��

#include<iostream>
#include<map>

using namespace std;

int main() {
	int N;
	cin >> N;

	map<long long, int> m;

	for (int i = 0; i < N; i++) {
		long long num;
		cin >> num;

		if (m.find(num) == m.end()) {
			m.insert(make_pair(num, 1));
		}
		else {
			m[num]++;
		}
	}

	int max = -999;
	long long result = -999;

	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second > max) {
			max = it->second;
			result = it->first;
		}
	}

	cout << result;
}
//���� ����ؼ� Ǯ �� �ִ� ����. �Է°��� -2^62 <= num <= 2^62�̹Ƿ� long long Ÿ���� ��ߵȴ�.