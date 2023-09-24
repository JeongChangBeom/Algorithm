//boj1141��_���λ�_����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<pair<int,string>> v;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		v.push_back({ str.size(), str });
	}

	sort(v.begin(), v.end());

	int count = 0;

	for (int i = 0; i < v.size(); i++) {
		bool check = false;
		for (int j = i + 1; j < v.size(); j++) {
			if (v[j].second.substr(0, v[i].first) == v[i].second) {
				count++;
				break;
			}
		}
	}

	int result = N - count;

	cout << result;
}
//���� ����. ������ ���� �򰥷��� ������ �����ϴµ� �����ɷȴ�.
//���� ��� ù��° ���� �Է��� ���� ���
//6
//hello
//hi
//h
//run
//rerun
//running
//���� h�� hello,hi�� ���λ簡 �� �� �ְ�, run�� runnig�� ���λ簡 �� �� �����Ƿ� ����� 4�� ���;� �����̴�.
//���ڿ��� �Է¹޾� ���ڿ��� ũ��� �Բ� vector�� �����ϰ� ���ڿ��� �����Ͽ� ���λ縦 ���ذ��� Ǯ�� �ذ��� �� �ִ�.