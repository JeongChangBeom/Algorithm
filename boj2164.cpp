//boj2164��_ī��2_ť

#include<iostream>
#include<queue>

using namespace std;

int main() {
	int N;
	cin >> N;

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	/*while (true) { <-���� �����µ� ���ؿ��� ��Ÿ�� ����(Segfault)�� ����
		q.pop();
		int x = q.front();
		q.pop();
		q.push(x);

		if (q.size() == 1) {
			cout << q.front();
		}
	}*/

	while (q.size() > 1) {
		q.pop();
		int x = q.front();
		q.pop();
		q.push(x);
	}

	cout << q.front();
}
//�ڷᱸ���� ť�� �˰� ������ ���� Ǯ �� �ִ� ����.
//�ٽ� �����غ��� �ּ�ó���� while���� ���ѷ����̱� ������ N�� 1�� �ԷµǸ� �ѹ��� 
//������ ���� �Ǿ� ��ť�� q.front()�� �ϱ� ������ ��Ÿ�� ������ ���� �� ����.