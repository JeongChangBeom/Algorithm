//boj1912��_������_dp

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

	vector<int> dp;

	dp.push_back(v.front());

	for (int i = 1; i < N; i++) {
		dp.push_back(max(v[i], dp[i - 1] + v[i]));
	}

	cout << *max_element(dp.begin(), dp.end());
}
//���ӵ� ������ ������ ������ ���� ����ū ��츦 ���ϴ� ����.
//dp�� ����ؼ� ���簪 �̶� ���簪+���ݱ��� �������� ���Ͽ� �� ū ��츦 ���ϸ� �ȴ�.