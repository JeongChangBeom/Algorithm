//boj11286��_���� ��_�ڷᱸ��(�켱���� ť)

#include<iostream>
#include<queue>

using namespace std;

struct compare {
	bool operator()(int x, int y) {
		if (abs(x) == abs(y)) {
			return y < x;
		}
		else {
			return abs(y) < abs(x);
		}
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, compare> q;

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
//�켱���� ť�� ���°� priority_queue<�ڷ���,����ü,�� ������> ���� �˾ƾ� Ǯ �� �ִ� ����.
//����ü�� ����Ͽ� �� ������ �κ��� ����� ���� �ذ��� �� �ִ�.