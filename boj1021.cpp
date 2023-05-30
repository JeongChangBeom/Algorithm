//boj1021��_ȸ���ϴ� ť_�ڷᱸ��(��)

#include<iostream>
#include<deque>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	deque<int> d;

	for (int i = 1; i <= N; i++) {
		d.push_back(i);
	}

	int left = 0;
	int right = 0;
	int result = 0;

	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;

		for (int i = 0; i < d.size(); i++) {
			if (d[i] == num) {
				left = i;
				right = d.size() - i;
				break;
			}
		}

		if (left <= right) {
			while (true) {
				if (d.front() == num) {
					d.pop_front();
					break;
				}
				d.push_back(d.front());
				d.pop_front();
				result++;
			}
		}
		else {
			while (true) {
				if (d.front() == num) {
					d.pop_front();
					break;
				}
				d.push_front(d.back());
				d.pop_back();
				result++;
			}
		}
	}
	cout << result;
}
//������ ����ť�� �����ϴ� ����.
//���� ��ġ���� ���ʰ� ������ ������� �� ������� �Ǵ��ϴ� ���� ����Ǯ���� �ٽ��̴�.