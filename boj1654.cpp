//boj1654��_���� �ڸ���_�̺�Ž��

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int K, N;
	cin >> K >> N;

	vector<int> v;

	for (int i = 0; i < K; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	int start = 1;
	unsigned int end = *max_element(v.begin(), v.end());
	unsigned int mid;
	unsigned int result = 0;

	while (start <= end) {
		unsigned key = 0;

		mid = (start + end) / 2;

		for (int i = 0; i < v.size(); i++) {
			key += v[i] / mid;
		}

		if (key >= N) {
			start = mid + 1;
			result = max(result, mid);
		}
		else {
			end = mid - 1;
		}
	}

	cout << result;
}
//�̺�Ž������ �ذ��� �� �ִ� ����. ������ ���̴� 2^31-1���� �۰ų� ���� �ڿ������ ������ ����
//Ʋ�Ⱦ��µ� unsigned int������ �ٲ㼭 �ذ��ߴ�.