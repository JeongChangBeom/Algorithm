//boj11478��_���� �ٸ� �κ� ���ڿ��� ����_���ڿ�, �ؽø� ����� ��

#include<iostream>
#include<map>

using namespace std;

int main() {
	string str;
	cin >> str;

	map<string, int> m;

	for (int i = 0; i < str.size(); i++) {
		for (int j = 1; j < str.size() - i + 1; j++) {
			string s = str.substr(i, j);
			m.emplace(s, 1);
		}
	}
	cout << m.size();
}
//���� ����ؼ� �ذ��� ����. ���ڿ��� �ڸ��� substr�Լ��� ����ؼ� �κ� ���ڿ��� ���� ��
//emplace�Լ��� ����Ͽ� �ʿ� �ߺ����� �������� ���� ũ�⸦ ����ϴ� ������ Ǯ����.