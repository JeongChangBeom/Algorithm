//boj2309��_�ϰ� ������_����, ���Ʈ���� �˰���

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int arr[10];
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr + 9);

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (arr[i] + arr[j]) == 100) {
				arr[i] = 999;
				arr[j] = 999;
				break;
			}
		}
		if (arr[i] == 999) { // <- �̺κ��� ������ 7���� �ȵ� �� ����.
			break;
		}
	}

	for (int i = 0; i < 9; i++) {
		if (arr[i] < 100) {
			cout << arr[i] << "\n";
		}
	}
}
//2�� for������ ��� ��츦 �غ��� Ǯ �� �ִ¹���.
//�ּ��� ǥ���ص� ���ǹ��� ������ ���� ��û ��̾���.