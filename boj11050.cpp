//boj11050��_���� ���1_����

#include<iostream>

using namespace std;

int factorial(int x) {
	if (x <= 1) {
		return 1;
	}
	return x * factorial(x - 1);
}

int main() {
	int N, K;
	cin >> N >> K;

	cout << factorial(N) / (factorial(N - K) * factorial(K));
}
//���װ���� ���� ������ �˸� ���� Ǯ �� �ִ� ����.
//nCk = n!/(n-k)!k!