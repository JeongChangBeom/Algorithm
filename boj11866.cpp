//boj11866��_�似Ǫ�� ����0_�ڷᱸ��(ť)

#include<iostream>
#include<queue>

using namespace std;


vector<int> v;

int main() {
	int N, K;
	cin >> N >> K;

	queue<int> q;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.empty() == false) {
		for (int i = 0; i < K - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		v.push_back(q.front());
		q.pop();
	}

	cout << "<";
	int i;
	for (i = 0; i < v.size() - 1; i++) {
		cout << v[i] << ", ";
	}
	cout << v[i] <<">";
}
//ť�� ����ؼ� Ǯ �� �ִ� ����.