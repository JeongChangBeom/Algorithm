//boj10845��_ť_�ڷᱸ��(ť)

#include<iostream>
#include<queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); //����°���(�̺κ��� ������ �ð��ʰ�)
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> q;

	int  N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		if (str == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if (str == "pop") {
			if (q.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (str == "size") {
			cout << q.size() << "\n";
		}
		else if (str == "empty") {
			if (q.empty()) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (str == "front") {
			if (q.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.front() << "\n";
			}
		}
		else if (str == "back") {
			if (q.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.back() << "\n";
			}
		}
	}
}
//�ڷᱸ�� ť�� ���� ������ �ٷ�� ����.