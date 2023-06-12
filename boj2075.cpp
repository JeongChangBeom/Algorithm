//boj2075��_N��° ū��_����, �켱���� ť

//�޸��ʰ�
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	vector<int> v;
//
//	for (int i = 0; i < (N * N); i++) {
//		int num;
//		cin >> num;
//		v.push_back(num);
//	}
//
//	sort(v.begin(), v.end());
//	cout << v[N * N - N];
//}

//�޸� �ʰ�
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	priority_queue<int> pq;
//
//	for (int i = 0; i < (N * N); i++) {
//		int num;
//		cin >> num;
//		pq.push(num);
//	}
//
//	for (int i = 0; i < N - 1; i++) {
//		pq.pop();
//	}
//
//	cout << pq.top();
//}

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct compare {
	bool operator()(int x, int y) {
		return x > y;
	}
};

int main() {
	ios_base::sync_with_stdio(false); // <- ����� ������ ������ �ð��ʰ�
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	priority_queue<int,vector<int>,compare> pq;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int num;
			cin >> num;
			pq.push(num);
		}
		while (pq.size() > N) {
			pq.pop();
		}
	}

	cout << pq.top();
}
//�켱���� ť�� ����� �ذ��� �� �ִ� ����.
//��ó������ ���Ϳ� ���� ���� �޾� ������ ����ߴ��� �޸��ʰ�������.
//�������� �켱����ť�� ��� �Է°��� �����ߴ��� �Ȱ��� �޸��ʰ�������.
//�׷��� �켱����ť�� N��°���� ū���� ������ ������ pop�ϴ� ������� �ذ��ߴ�.