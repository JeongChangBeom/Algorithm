//boj14916��_�Ž�����_�׸��� �˰���

#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int count = 0;
	int result = 0;

	while (n > 0) {
		if (n % 5 == 0) {
			result = (n / 5) + count;
			cout << result;
			return 0;
		}
		else {
			n -= 2;
			count++;
		}
	}
	if (n == 0) {
		cout << count;
	}
	else {
		cout << "-1";
	}
}
//�Ž������� �ִ��� 5������ �� �� �ִ� ��ŭ �ְ� �������� 2������ �ִ� �׸��� �˰������� �ذ��ߴ�.