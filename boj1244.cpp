//boj1244��_����ġ �Ѱ� ����_����

#include<iostream>


using namespace std;

int arr[101];

int main() {
	int N;
	int student_count;
	int gender;
	int switch_num;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	cin >> student_count;
	for (int sc = 0; sc < student_count; sc++) {
		cin >> gender >> switch_num;

		if (gender == 1) {
			for (int i = 1; i <= N; i++) {
				if (i % switch_num == 0) {
					arr[i] = !arr[i];
				}
			}
		}
		else if (gender == 2) {
			arr[switch_num] = !arr[switch_num];
			for (int i = 1; (arr[switch_num - i] == arr[switch_num + i]); i++) {
				if ((switch_num - i < 1 || switch_num + i > N)) {
					break;
				}
				arr[switch_num + i] = !arr[switch_num + i];
				arr[switch_num - i] = !arr[switch_num - i];
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
		if (i % 20 == 0) {
			cout << '\n';
		}
	}
}
//��������.
//������ ���ϴ� ������ �����ϸ� ���� Ǯ �� �ִ�.