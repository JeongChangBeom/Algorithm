//boj18110_solved.ac_����,����

#include<iostream>
#include<algorithm>
#include<cmath>
#include<deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	if (n == 0) {
		cout << "0";
		return 0;
	}

	deque<int> d;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		d.push_back(num);
	}

	sort(d.begin(), d.end());

	int except = round(d.size() * 0.15f);

	for (int i = 0; i < except; i++) {
		d.pop_front();
		d.pop_back();
	}

	int sum = 0;

	for (int i = 0; i < d.size(); i++) {
		sum += d[i];
	}

	cout << round((float)sum / (float)d.size());
}
//deque�� �̿��ؼ� �ذ��� ����.
//deque�� �հ� �ڿ��� ��� pop�� �� �ִ� ���� Ȱ���Ͽ� ��������� ���ؼ� �ذ��ߴ�.