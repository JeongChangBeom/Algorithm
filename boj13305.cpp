//boj13305��_������_�׸��� �˰���

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> dis;
	vector<int> cost;

	for (int i = 1; i < N; i++) {
		int num;
		cin >> num;
		dis.push_back(num);
	}

	for (int i = 1; i <= N; i++) {
		int num;
		cin >> num;
		cost.push_back(num);
	}

	long long min_cost = cost[0];
	long long result = 0;

	for (int i = 0; i < N - 1; i++) {
		min_cost = min(min_cost, (long long)cost[i]);
		result += dis[i] * min_cost;
	}

	cout << result;
}
//���ø� �鸱������ ���ݱ��� ������ ������ �ּҺ��� ���ذ��� ���� �ּ��� ���� ã�� ����.
//ó���� �ּҰ��� ������� int�� Ǯ� 58���� ���Դµ�, long longŸ������ �ٲ㼭 100���� �޾Ҵ�.