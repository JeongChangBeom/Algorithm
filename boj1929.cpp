//boj1929��_�Ҽ� ���ϱ�_����

#include<iostream>
#include<cmath>

using namespace std;

bool isPrime_Eratos(int x) {
		if (x == 1) {
			return false;
		}
		else {
			for (int i = 2; i <= sqrt(x); i++) {
				if (x % i == 0) {
					return false;
				}
			}
			return true;
		}
}

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = N; i <= M; i++) {
		if (isPrime_Eratos(i)) {
			cout << i << "\n";
		}
	}
}
//���� Ǯ���� �Ҽ� ã�� ������ ���� ������ �����̴�. �Ҽ� ã�� ������ �����佺�׳׽��� ü��
//Ǯ�� �ʾƵ� �ð��ʰ��� ���� ������ �� ������ �����佺�׳׽��� ü�� Ǯ��� �ð��ʰ��� �ȳ��´�.
//�����佺�׳׽���ü(O(nlog(logn)));