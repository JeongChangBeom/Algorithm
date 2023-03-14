//boj1966��_������ ť_�ڷᱸ��(ť)

#include<iostream>
#include<queue>
#include<deque>
#include<algorithm>

using namespace std;

struct num {
	int number;
	int priority;
};

bool compare(int x, int y) { //�������� ����
	return y < x;
}

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N, M;
		cin >> N >> M;

		queue<num> q;
		deque<int> d; //�켱���� �񱳸� ���� ��

		for (int j = 0; j < N; j++) {
			int x;
			cin >> x;

			num n;
			n.number = j;
			n.priority = x;
			q.push(n);

			d.push_back(x);
		}

		sort(d.begin(), d.end(), compare); //�켱������ ���� ������ �������� ����
		
		int count = 0;

		while(true) {
			if (q.front().priority == d.front()) {
				if (q.front().number == M) { //�� ��°�� �μ�Ǿ����� �ñ��� ������ �켱������ ���� ���� ���
					count++;
					cout << count << "\n";
					break;
				}
				q.pop();
				d.pop_front();
				count++;
			}
			else { //�켱������ ���� ���� ������ �ƴҰ�� ť�� ���� �ڿ� ���ġ.
				num x = q.front();
				q.pop();
				q.push(x);
			}
		}
	}
}
//�ڷᱸ�� ť�� �̿��� Ǯ �� �ִ� ����.
//���� ������ �Է¹��� ������ ���� ��¼����� �ٲ�� ������ ����ü�� 
//�̿��Ͽ� ���� ��ȣ�� ����� �ذ��ߴ�.