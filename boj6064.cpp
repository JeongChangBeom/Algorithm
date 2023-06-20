//boj6064��_ī�� �޷�_����

#include<iostream>

using namespace std;

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}

int lcm(int x, int y) {
	return (x * y) / gcd(x, y);
}

int main() {
	int T;
	cin >> T;
	
	for (int k = 0; k < T; k++) {
		int M, N, x, y;
		int temp = 0;

		cin >> M >> N >> x >> y;

		for (int i = x; i <= lcm(M, N); i += M) {
			temp = i % N;

			if (temp == 0) {
				temp = N;
			}

			if (temp == y) {
				cout << i << '\n';
				break;
			}
		}
		if (temp != y) {
			cout << "-1" << '\n';
		}
	}
}
//m,n�� ���� <x,y>�� ���³��� ����� x�� m , y�� n���� ���� �������� ���³� �� �ִµ�
//�� ���� ���ϱ� ���� <1,1>���� �����ؼ� ���������ָ鼭 �˻��ϸ�ȴ�.
//�������� �־��� �˻��� ���� ����ظ� ���� �� �� �ִµ� ����ش� M�� N�� �ּ� ������̴�.