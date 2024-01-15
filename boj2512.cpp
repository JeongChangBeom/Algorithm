//boj2512��_����_�̺� Ž��

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	int M;
	cin >> M;

	sort(v.begin(), v.end());

	int start = 0;
	int end = v.back();
	int result = 999999;

	while (start <= end) {
		int sum = 0;
		int mid = (start + end) / 2;

		for (int i = 0; i < N; i++) {
			sum += min(v[i], mid);
		}

		if (sum <= M) {
			result = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	cout << result;
}
//�̺� Ž�� ����.
//�̺� Ž���� �̿��ؼ� ���� ���ݾ� �÷����� ��ü ���������� �����ʰ� ���ߴ� ���� ������ �ٽ��̴�.
//��� ��û�� ������ �� �ִ� ��쿡 ��û�� �ݾ��� �״�� �����ϰ�, �Ұ����� ��쿡�� ���Ѿ��� ����Ͽ� �� �̻��� �����û����
//��� ���Ѿ��� �����ؾߵǱ� ������ �����û(v[i]��)�� �̺�Ž���� ���� ������ ���Ѿ�(mid)�� ���ذ��� ��ü ���������� ���߸� �ذ��� �� �ִ�.