//boj20920��_���ܾ� �ϱ�� ���ο�_�ڷᱸ��(�ؽø� ����� ���հ� ��)

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

map<string, int> m;

bool compare(string x, string y) {
	if (x.size() == y.size() && m[x] == m[y]) {
		return x < y;
	}
	if (x.size() != y.size() && m[x] == m[y]) {
		return x.size() > y.size();
	}
	return m[x] > m[y];
}

int main() {
	int N, M;
	cin >> N >> M;

	vector<string> v;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;

		if (s.size() < M) {
			continue;
		}
		if (m.find(s) == m.end()) {
			m[s] = 0;
			v.push_back(s);
		}
		m[s]++;
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++){
		cout << v[i] << '\n';
	}
}
//�Ʒ� 3���� ������ ������Ű�� �Ǵ� ����
//1. ���� ������ �ܾ��ϼ��� �տ� ��ġ�Ѵ�. (���� ���� ������ �����ش�)
//2. �ش� �ܾ��� ���̰� ����� �տ� ��ġ�Ѵ�. (size()�� ���� ���̸� ��)
//3. ���ĺ� ���� ������ �տ� �ִ� �ܾ��ϼ��� �տ� ��ġ�Ѵ�. (sort()�� ����ؼ� ���������� ����)