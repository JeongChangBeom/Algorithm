//boj1927��_�ּ� ��_�ڷᱸ��(�켱���� ť)

#include<iostream>
#include<queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, greater<int>> q;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;

		if (x == 0) {
			if (q.empty()) {
				cout << "0" << "\n";
			}
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else {
			q.push(x);
		}
	}
}
//�ֱٿ� Ǯ���� �ִ� �� ������ �ּ� ������ �� �ٲٸ� �Ǵ� ����.
//�켱����ť�� �⺻������ Ʈ���� ������ ���� ū���ε� greater�� �̿��ؼ�
//������ ���� �������� �����ϸ� ���� �ذ��� �� �ִ�.