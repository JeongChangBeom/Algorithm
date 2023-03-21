//boj2108��_�����_����,����

#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int arr[500001];

struct num {
	int cnt = 0;
	int x = 0;
};

bool compare(num x, num y) {
	if (y.cnt < x.cnt) {
		return true;
	}
	else if (x.cnt == y.cnt) {
		if (x.x < y.x) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int sum = 0;

	for (int i = 0; i < N; i++) {
		sum += arr[i];
	}

	int aver = round(double(sum) / N);

	cout << aver << "\n"; //������

	sort(arr, arr + N);

	cout << arr[N / 2] << "\n"; //�߾Ӱ�

	vector<num> count(8001);

	for (int i = 0; i < N; i++) {
		count[arr[i] + 4000].cnt++;
		count[arr[i] + 4000].x = arr[i];
	}
	
	sort(count.begin(), count.end(), compare);

	int second = -9999;
	int cnt = 0;

	if (count[0].cnt == count[1].cnt) {
		for (int i = 0; i < N; i++) {
			if (count[i].x > second) {
				second = count[i].x;
				cnt++;
			}
			if (cnt == 2) {
				break;
			}
		}
		cout << second << "\n";
	}
	else {
		cout << count[0].x << "\n"; //�ֺ�
	}

	cout << *max_element(arr, arr + N) - *min_element(arr, arr + N) << "\n"; //����
}
//�ٸ� �͵麸�� �ֺ��� ���ϴ°� �ٽ��� ����. �ֺ��� ���ϰ� �ֺ��� �������� �ι�°��
//���� ���� ����ϴ� �κп��� ���� �ָԾ���.