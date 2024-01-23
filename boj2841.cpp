//boj2841��_�ܰ����� ��Ÿ ����_�ڷᱸ��(����)

#include<iostream>
#include<stack>

using namespace std;

int main() {
	int N, P;
	cin >> N >> P;

	stack<int> s[8];
	int result = 0;

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;

		if (s[x].empty()) {
			s[x].push(y);
			result++;
		}
		else {
			if (s[x].top() < y) {
				s[x].push(y);
				result++;
			}

			else if (s[x].top() > y) {
				while (!s[x].empty() && s[x].top() > y) {
					s[x].pop();
					result++;
				}
				if (s[x].empty() || s[x].top() < y) {
					s[x].push(y);
					result++;
				}
			}
		}
	}
	cout << result;
}
//�ڷᱸ�� ���ù���.
//������ �ٽ��� �� 3�����̴�. 1. �ƹ� ������ ������ �ʰ� ���� �� �ٷ� ������(+1) 2. �������� ������ ���� ������ �ִ� �������� ���� ��� �ٷ� ������(+1)
//3. �������� ������ ���� ������ �ִ� �������� ���� ��� ���� �������� �ϳ��� ���鼭 +1�� ���ְ�, ���ٰ� ���� ������ �����ų�, ���� ���� �� ������(+1)