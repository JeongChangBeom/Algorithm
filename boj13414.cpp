//boj13414��_������û_�ڷᱸ��(�ؽø� ����� ���հ� ��)

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int K, L;
	cin >> K >> L;

	map<string, int> m;

	for (int i = 1; i <= L; i++) {
		string num;
		cin >> num;
		m[num] = i;
	}

	vector<pair<int, string>> v;
	
	for (auto i = m.begin(); i != m.end(); i++) {
		string num = i->first;
		int seq = i->second;
		v.push_back({ seq,num });
	}

	sort(v.begin(), v.end());

	int size = min((int)v.size(), K);

	for (int i = 0; i < size; i++) {
		cout << v[i].second << '\n';
	}
}
//������ �ذ��� �� �ִ� ����. vector�� ������ �� ������ first�� �ξ� sort�ϴ� ���� �ٽ��̴�.