//boj2304��_â�� �ٰ���_���Ʈ����

#include<iostream>
#include<algorithm>

using namespace std;

int arr[1001];

int main() {
	int N;
	cin >> N;

	int maxH = 0;
	int maxH_L = 0;
	int maxL = 0;
	int minL = 9999;

	for (int i = 0; i < N; i++) {
		int L, H;
		cin >> L >> H;

		arr[L] = H;

		if (maxH < H) {
			maxH_L = L;
		}

		maxH = max(maxH, H);
		maxL = max(maxL, L);
		minL = min(minL, L);
	}

	int result = 0;
	int curH = 0;

	for (int i = minL; i < maxH_L; i++) {
		if (arr[i] != 0) {
			if (curH < arr[i]) {
				curH = arr[i];
			}
		}
		result += curH;
	}

	curH = 0;

	for (int i = maxL; i >= maxH_L; i--) {
		if (arr[i] != 0) {
			if (curH < arr[i]) {
				curH = arr[i];
			}
		}
		result += curH;
	}

	cout << result;
}
//���Ʈ���� ������µ� ���� ���� ����ó�� �ذ��ߴ�.
//ó�� �Է°��� ������ ���� �� ����(minL, maxL)�� ���� ���� ����� ����(maxH)�� ��ġ(maxH_L)�� �����س���
//���� �� ����� ���ʰ� �������� ũ�⸦ �����ִ� ������ �ذ��ߴ�.