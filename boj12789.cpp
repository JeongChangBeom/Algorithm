//boj12789��_��Ű��Ű ���ĵ帮��_�ڷᱸ��(����, ť)

#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main() {
	int N;
	cin >> N;

	queue<int> q;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		q.push(num);
	}

	stack<int> s;
	int turn = 1;

	while (!q.empty()) {
		if (q.front() == turn) {
			q.pop();
			turn++;
		}
		else{
			if (!s.empty() && s.top() == turn) {
				s.pop();
				turn++;
			}
			else {
				s.push(q.front());
				q.pop();
			}
		}
	}

	while(!s.empty()) {
		if (s.top() != turn) {
			cout << "Sad";
			return 0;
		}
		s.pop();
		turn++;
	}
	cout << "Nice";
}
//���ð� ť�� Ȱ���ؼ� Ǯ �� �ִ� ����. ������ �䱸�ϴ´�� ó�� ���ִ� ������� ť�� �ְ�
//���ʰ� �ƴϸ� ���ÿ� �־���ٰ� pop�ϸ鼭 ������ �´��� Ȯ���ϸ�ȴ�.