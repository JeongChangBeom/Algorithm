//boj20291��_���� ����_���ڿ�,�Ľ�,����

#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

int main() {
	int N;
	cin >> N;

	map<string, int> m;
	vector<string> v;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		string extension;

		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '.') {
				extension = str.substr(j + 1);
				if (m.find(extension) == m.end()) {
					m.insert({ extension, 1 });
					v.push_back(extension);
				}
				else {
					m[extension]++;
				}
			}
		}
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ' << m.at(v[i]) << '\n';
	}
}
//���ڿ� �Ľ̰� ������ ����� ����. ù��° ������ Ȯ���� �� ���� ������ ���ڿ� �Ľ̰� map�� �̿��� �ذ��߰�
//�ι�° ������ ������ ���� �ذ��ߴ�.