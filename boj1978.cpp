//boj1978��_�Ҽ� ã��_����

#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int arr[101];

/*bool isPrime_Eratos(int x) { <-�����佺�׳׽��� ü
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
}*/

bool isPrime(int x) {
	int cnt = 0;

	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			cnt++;
		}
	}
	if (cnt == 2) {
		return true;
	}
	return false;
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int result = 0;

	for (int i = 0; i < N; i++) {
		if (isPrime(arr[i])) {
			result++;
		}
	}
	cout << result;
}
//�Է¹��� �迭�� �Ҽ����� �Ǵ��ϴ� �Լ��� ����� Ǯ����.
//�Է¹��� ���� ������ �������� �ϴ� ���� 2����(1�� �ڽ�) �Ҽ���� �Ǵ��Ͽ���.
//�� �ּ����� �����佺�׳׽��� ü�� ����ؼ� Ǯ ���� ���� �� ����.