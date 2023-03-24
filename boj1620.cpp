//boj1620��_���¾� ���ϸ� ������ �̴ټ�_�ڷᱸ��

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

/*struct Poketmon {
	int num;
	string name;
};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	vector<Poketmon> book;

	for (int i = 1; i <= N; i++) {
		Poketmon p;
		p.num = i;
		cin >> p.name;
		book.push_back(p);
	}

	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;

		if (s[0] >= 65 && s[0] <= 90) {
			cout << book[find_if(book.begin(), book.end(), [&s](Poketmon p) { return p.name == s; }) - book.begin()].num << "\n";
		}
		else {
			cout << book[find_if(book.begin(), book.end(), [&s](Poketmon p) { return p.num == stoi(s); }) - book.begin()].name << "\n";
		}
	}
}*/

string poketmon[999999];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	map<string, int> book;
	string name;
	
	for (int i = 1; i <= N; i++) {
		cin >> name;
		poketmon[i] = name;
		book.insert(make_pair(name, i));
	}

	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		if (s[0] >= 65 && s[0] <= 90) {
			cout << book[s] << "\n";
		}
		else {
			cout << poketmon[stoi(s)] << "\n";
		}
	}
}
//�ڷᱸ�� ���� ����ؾߵǴ� ����. ó������ ����ü�� �̿��� ���͸� ����ؼ� Ǯ�� �ߴµ�
//�ð� �ʰ��� ���� ������ �ٲ� ���� �̿��ؼ� Ǯ����.