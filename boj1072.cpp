//boj1072��_����_�̺�Ž��

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	long long X, Y, Z;
	int result = -1;
	cin >> X >> Y;

	Z = (Y * 100) / X;

	if (Z >= 99) {
		cout << result << '\n';
		return 0;
	}

	int start = 0;
	int end = 1000000000;

	while (start <= end) {
		int mid = (start + end) / 2;
		int tmp = ((Y + mid) * 100) / (X + mid);

		if (Z < tmp) {
			result = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	
	cout << result;
}
//�̺�Ž���� �̿��� �ذ��� ����. �Ϲ������� 1�� ���ذ��� Ž���� �ݺ��ϰ� �Ǹ�
//X�� �ִ밪�� 10���̹Ƿ� �ð��ʰ��� ���� ���� �����ؾ��Ѵ�.