//boj2805��_���� �ڸ���_�̺� Ž��

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	long start = 0;
	long end = *max_element(v.begin(), v.end());

	long result = 0;

	while (start <= end) {
		long length = 0;

		long mid = (start + end) / 2;

		for (int i = 0; i < v.size(); i++) {
			if (v[i] < mid) {
				continue;
			}
			else {
				length += v[i] - mid;
			}
		}

		if (length >= M) {
			start = mid + 1;
			result = max(result, mid);
		}
		if (length > M) {
			start = mid + 1;
		}
		else if (length < M) {
			end = mid - 1;
		}
	}
	cout << result;
}
//�ֱٿ� Ǯ���� ���� �ڸ���� ������ ����.
//���ͳݿ� ���ƴٴϴ� ��� �׽�Ʈ ���̽��� ����Ǵµ� Ʋ�ȴٰ� ���ͼ� Ʋ�� �κ��� ���� ã�� ������µ�
//M�� ������ 20��������� longŸ�� ������ ����ؼ� �ذ��� �� �־���.