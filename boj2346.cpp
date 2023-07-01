//boj2346��_ǳ�� �Ͷ߸���_�ڷᱸ��(��)

#include<iostream>
#include<deque>

using namespace std;

struct number {
	int x;
	int index;
};

int main() {
	int N;
	cin >> N;

	deque<number> d;

	for (int i = 1; i <= N; i++) {
		number n;

		int num;
		cin >> num;

		n.x = num;
		n.index = i;

		d.push_back(n);
	}

	while (!d.empty()) {
		int x = d[0].x;
		cout << d[0].index << " ";

		d.pop_front();

		if (d.empty()) {
			break;
		}

		if (x > 0) {
			for (int i = 1; i < x; i++) {
				d.push_back(d[0]);
				d.pop_front();
			}
		}
		else {
			for (int i = 0; i < abs(x); i++) {
				d.push_front(d[d.size() - 1]);
				d.pop_back();
			}
		}

	}
}
//�ڷᱸ�� ���� �̿��� ����. ����ü ���� ����ؼ� �Է¹��� ���� �ε����� �����ϰ� ���� Ư���� �̿��ؼ� �ذ��� �� �־���.