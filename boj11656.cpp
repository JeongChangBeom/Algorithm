//boj11656��_���̻� �迭_����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> v;

int main() {
	string S;
	cin >> S;

	int length = S.size();

	v.push_back(S);

	for (int i = 1; i < length; i++) {
		S.erase(S.begin());
		v.push_back(S);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < length; i++) {
		cout << v[i] << "\n";
	}
}
//������ �ϴ� �ͺ��� ���ڿ� S�� ��� ���̻縦 ���� ���Ϳ� �����ϴ� ���� ������ ����