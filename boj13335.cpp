//boj13335��_Ʈ��_�ڷᱸ��(ť)

#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n, w, L;
	cin >> n >> w >> L;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	queue<int> q;

	int sum = 0;
	int result = 0;

	for (int i = 0; i < n; i++) {
		while (sum + v[i] > L) {
			if (q.size() == w) {
				sum -= q.front();
				q.pop();
			}
			q.push(0);
			result++;
		}
		q.push(v[i]);
		sum += v[i];
		result++;
	}
	cout << result + w;
}
//ť�� �̿��ؼ� Ǯ �� �ִ� ����.
//����� �� ������ Ʈ���� �ǳʰ��� �ð��� �����ִ� ���� ��԰� �Ǽ� ���� ����.