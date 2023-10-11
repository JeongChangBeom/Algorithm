//boj7662��_���� �켱���� ť_�ڷᱸ��

#include<iostream>
#include<set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		int  k;
		cin >> k;

		multiset<int> q;

		for (int i = 0; i < k; i++) {
			char oper;
			int num;

			cin >> oper >> num;

			switch (oper) {
			case 'I':
				q.insert(num);
				break;
			case 'D':
				if (num == 1 && !q.empty()) {
					std::multiset<int>::iterator it = q.end();
					it--;
					q.erase(it);
					break;
				}
				else if (num == -1 && !q.empty()) {
					q.erase(q.begin());
					break;
				}
			}
		}
		if (q.empty()) {
			cout << "EMPTY" << '\n';
		}
		else {
			std::multiset<int>::iterator it = q.end();
			it--;
			cout << *it << " " << *q.begin() << '\n';
		}
	}
}
//multiset�� �̿��ؼ� �ذ��� ����.
//multiset�� ������ ���� �ٷ� �����ϹǷ� �̹����� Ǫ�µ� �־� �����ߴ�.
//I�� �Է¹޾����� ������ �ϰ� D -1�� �Է¹޾����� �ּҰ�(q.begin())�� �������ְ�,
//D 1�� �Է¹޾����� �ִ밪(q.end()�� �ִ밪 + 1�� �ּ��̹Ƿ� q.end()�� iterator���� --�� ���ش�)�� �������ִ� ������ �ذ��ߴ�.
//������ ��¿� ���๮�ڸ� ���Ծ� ��� Ʋ���� ���� ��û ����߾���. �̷� ����� �κе� ��������.