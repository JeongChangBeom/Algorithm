//boj11047��_���� 0_�׸��� �˰���

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int x, int y) {
	return y < x;
}

int main() {
	int N, K;
	cin >> N >> K;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end(), compare);
	
	int coin = 0;
	int i = 0;

	while (K > 0) {
		if (K < v[i]) {
			i++;
		}
		else {
			coin += K / v[i];
			K -= (K / v[i]) * v[i];
			i++;
		}
	}

	cout << coin;
}
//�׸��� �˰����� ����ؼ� Ǯ �� �ִ� ����. ������ ������ ū������ �����ؼ�
//K������ ū ������ �ѱ�� K�� ���� ���� ���� �� ���� ū �������� ��� Ǯ����.