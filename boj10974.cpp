//boj10974��_��� ����_��Ʈ��ŷ, 
//
//Ǯ��1
// 
//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int arr[9];
//
//bool visited[9];
//
//int N;
//
//void DFS(int x, int y) {
//	if (y == N) {
//		for (int i = 0; i < N; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (!visited[i]) {
//			visited[i] = true;
//			arr[y] = i + 1;
//			DFS(i + 1, y + 1);
//			visited[i] = false;
//		}
//	}
//}
//
//int main() {
//	cin >> N;
//
//	DFS(1, 0);
//}
//��Ʈ��ŷ ����. �ֱٿ� Ǯ���� N��M �ø����߿� ����� ������ �־� ���� Ǯ �� �־���.
//
//Ǯ��2

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> v;

	for (int i = 1; i <= N; i++) {
		v.push_back(i);
	}

	do {

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}

		cout << '\n';

	} while (next_permutation(v.begin(), v.end()));
}
//��Ʈ��ŷ �Ӹ��ƴ϶� algorithm ��������� next_permutation�̶�� ���� ������ �����ִ� �Լ��ε� ������ �� �ִ�.