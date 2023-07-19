//boj2217��_����_����

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(int x, int y) {
	return x > y;
}

int main() {
	int N;
	cin >> N;
	
	vector<int> v;

	for (int i = 0; i < N; i++) {
		int kg;
		cin >> kg;
		v.push_back(kg);
	}

	sort(v.begin(), v.end(), compare);

	int result = 0;

	for (int i = 1; i <= v.size(); i++) {
		int tmp = v[i - 1] * i;
		if (result < tmp) {
			result = tmp;
		}
	}

	cout << result;
}
//������ �̿��ؼ� �ذ��� ����. ������ �ɸ��� �߷��� ������ �ִٴ� ���� �̿��ؼ� ������������ ������ ��
//������ ���� ū ����1���� ����� ��, ������ 2��°�� ū ���� 2���� ����� ��......�̷������� ���ؼ� �ִ밪�� ���ߴ�. 