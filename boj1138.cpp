//boj1138��_�� �ٷ� ����_����

#include<iostream>

using namespace std;

int arr[10];

int main() {
	int N;
	cin >> N;

	for (int i = 1; i < N + 1; i++) {
		int count;
		cin >> count;

		for (int j = 0; j < N; j++) {
			if (arr[j] == 0 && count == 0) {
				arr[j] = i;
				break;
			}
			else if (arr[j] == 0 && count != 0) {
				count--;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}
//���� ����. �׸��� �˰��� ���� �������� Ǯ �� �־���.
//Ű�� ���� ���� ���(i = 1 ����) ���ʿ� �ڱ⺸�� ū ����� ���� �Է¹޾��� ��, ����� �ȼ������鼭
//���ʿ� ���ִ� ����� ���� ������ �� ���� ����� ������ �ذ��ߴ�.