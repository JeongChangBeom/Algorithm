//boj1302��_����Ʈ����_�ڷᱸ��

#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	map<string,int> best;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		best[s]++;
	}

	int max = -1;
	for (auto i = best.begin(); i != best.end(); i++) {
		max = std::max(max,i->second); // <- max�Լ��� ������ std::max�� �ؾߵȴ�.
	}
	for (auto i = best.begin(); i != best.end(); i++) {
		if (i->second == max) {
			cout << i->first;
			return 0;
		}
	}
}
//���� ����ؼ� Ǯ �� �ִ� ���� for������ ���� ��ȸ�ϴ� ���� �˾ƾ� ���� Ǯ �� �ִ�.
//max�Լ��� ����Ϸ� �ߴµ� namespace�� ������ ����� �ȵǴ��� ������ �𸣰ڴ�.