//boj22233��_����� Ű����_�ڷᱸ��(��)

/*�ð��ʰ�
#include<iostream>
#include<map>
#include<vector>
#include<sstream>


using  namespace std;

vector<string> split(string s, char c) {
	istringstream iss(s);
	string buffer;

	vector<string> result;

	while (getline(iss, buffer, c)) {
		result.push_back(buffer);
	}

	return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	map<string, int> m;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;

		if (m.find("s") == m.end()) {
			m.insert({ s, 1 });
		}
		else {
			m.find("s")->second++;
		}
	}

	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;

		vector<string> v = split(str, ',');

		for (int j = 0; j < v.size(); j++) {
			if (m.find(v[j]) != m.end()) {
				if (m.find(v[j])->second == 1) {
					m.erase(m.find(v[j]));
				}
				else {
					m.find(v[j])->second--;
				}
			}
		}

		cout << m.size() << '\n';
	}

}
*/

#include<iostream>
#include<unordered_set>
#include<vector>

using  namespace std;

unordered_set<string> s;
unordered_set<string>::iterator it;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;


	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		s.insert(str);
	}

	for (int i = 0; i < M; i++) {
		string str;
		string word = "";
		cin >> str;

		vector<string> v;

		for (int j = 0; j < str.length(); j++) {
			if (str[j] == ',') {
				v.push_back(word);
				word = "";
			}
			else {
				word += str[j];
			}
		}
		v.push_back(word);

		for (int j = 0; j < v.size(); j++) {
			it = s.find(v[j]);

			if (it != s.end()) {
				s.erase(it);
			}
		}

		cout << s.size() << '\n';
	}
}
//�ڷᱸ�� unordered_set����. �� ������ ���� unordered_set�� ���� �˰� �Ǿ���.
//unordered_set�̶� set�ε� �����Ҷ� ������ �����ʰ� ������ ������� ������ ������Ű�� set�� ���Ѵ�.
//�ð��� ��¥ �߿��� ������ unordered_set�� ������� ������ ���� ������ �ð��ʰ�������...
